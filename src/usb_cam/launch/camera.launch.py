# camera.launch.py  (修正版重點)
import os, sys
from pathlib import Path
from launch import LaunchDescription
from launch.actions import GroupAction
from launch_ros.actions import Node

dir_path = os.path.dirname(os.path.realpath(__file__))
sys.path.append(dir_path)
from camera_config import CameraConfig, USB_CAM_DIR

CAMERAS = [
    CameraConfig(
        name='camera1',
        param_path=Path(USB_CAM_DIR, 'config', 'params_1.yaml')
    )
]

def generate_launch_description():
    # 建 camera nodes
    camera_nodes = [
        Node(
            package='usb_cam',
            executable='usb_cam_node_exe',
            output='screen',
            name=camera.name,
            namespace=(camera.namespace or ''),          # 避免 None
            parameters=[str(camera.param_path),{'save_dir': '/home/iclab/ysk/src/usb_cam/config'}],         # 參數檔轉成字串路徑較保險
            remappings=(camera.remappings or []) ,        # 避免 None
        )
        for camera in CAMERAS
    ]

    image_node = Node(
    package='image',
    executable='image',
    name='image_node',
    output='screen',
    )
    motion_node = Node(
    package='motion',
    executable='motion',
    name='motion_node',
    output='screen',
    )

    # web_video_server
    web_video = Node(
        package='web_video_server',
        executable='web_video_server',
        name='web_video_server',
    )

    rosbridge_node = Node(
        package='rosbridge_server',
        executable='rosbridge_websocket',
        name='rosbridge_websocket',
        parameters=[{'port': 9090, 'address': '0.0.0.0'}],
        output='screen'
    )

    actions = camera_nodes + [image_node, motion_node, web_video, rosbridge_node]


    ld = LaunchDescription()
    ld.add_action(GroupAction(actions=actions))
    return ld
