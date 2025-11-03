import rclpy
from rclpy.node import Node

class motionNode(Node):
    def __init__(self):
        super().__init__('motion')
        self.get_logger().info("=======Motion On=======")
    
def main():
    rclpy.init()

    node = motionNode()

    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()

