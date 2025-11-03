// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ysk_msgs:msg/YUVValue.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "ysk_msgs/msg/detail/yuv_value__struct.h"
#include "ysk_msgs/msg/detail/yuv_value__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ysk_msgs__msg__yuv_value__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[33];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ysk_msgs.msg._yuv_value.YUVValue", full_classname_dest, 32) == 0);
  }
  ysk_msgs__msg__YUVValue * ros_message = _ros_message;
  {  // ymin
    PyObject * field = PyObject_GetAttrString(_pymsg, "ymin");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ymin = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ymax
    PyObject * field = PyObject_GetAttrString(_pymsg, "ymax");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ymax = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // crmin
    PyObject * field = PyObject_GetAttrString(_pymsg, "crmin");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->crmin = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // crmax
    PyObject * field = PyObject_GetAttrString(_pymsg, "crmax");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->crmax = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cbmin
    PyObject * field = PyObject_GetAttrString(_pymsg, "cbmin");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cbmin = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cbmax
    PyObject * field = PyObject_GetAttrString(_pymsg, "cbmax");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cbmax = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ysk_msgs__msg__yuv_value__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of YUVValue */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ysk_msgs.msg._yuv_value");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "YUVValue");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ysk_msgs__msg__YUVValue * ros_message = (ysk_msgs__msg__YUVValue *)raw_ros_message;
  {  // ymin
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ymin);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ymin", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ymax
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ymax);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ymax", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // crmin
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->crmin);
    {
      int rc = PyObject_SetAttrString(_pymessage, "crmin", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // crmax
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->crmax);
    {
      int rc = PyObject_SetAttrString(_pymessage, "crmax", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cbmin
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cbmin);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cbmin", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cbmax
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cbmax);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cbmax", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
