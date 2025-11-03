// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ysk_msgs:msg/CameraSave.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__MSG__DETAIL__CAMERA_SAVE__FUNCTIONS_H_
#define YSK_MSGS__MSG__DETAIL__CAMERA_SAVE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ysk_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ysk_msgs/msg/detail/camera_save__struct.h"

/// Initialize msg/CameraSave message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ysk_msgs__msg__CameraSave
 * )) before or use
 * ysk_msgs__msg__CameraSave__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ysk_msgs
bool
ysk_msgs__msg__CameraSave__init(ysk_msgs__msg__CameraSave * msg);

/// Finalize msg/CameraSave message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ysk_msgs
void
ysk_msgs__msg__CameraSave__fini(ysk_msgs__msg__CameraSave * msg);

/// Create msg/CameraSave message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ysk_msgs__msg__CameraSave__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ysk_msgs
ysk_msgs__msg__CameraSave *
ysk_msgs__msg__CameraSave__create();

/// Destroy msg/CameraSave message.
/**
 * It calls
 * ysk_msgs__msg__CameraSave__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ysk_msgs
void
ysk_msgs__msg__CameraSave__destroy(ysk_msgs__msg__CameraSave * msg);

/// Check for msg/CameraSave message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ysk_msgs
bool
ysk_msgs__msg__CameraSave__are_equal(const ysk_msgs__msg__CameraSave * lhs, const ysk_msgs__msg__CameraSave * rhs);

/// Copy a msg/CameraSave message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ysk_msgs
bool
ysk_msgs__msg__CameraSave__copy(
  const ysk_msgs__msg__CameraSave * input,
  ysk_msgs__msg__CameraSave * output);

/// Initialize array of msg/CameraSave messages.
/**
 * It allocates the memory for the number of elements and calls
 * ysk_msgs__msg__CameraSave__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ysk_msgs
bool
ysk_msgs__msg__CameraSave__Sequence__init(ysk_msgs__msg__CameraSave__Sequence * array, size_t size);

/// Finalize array of msg/CameraSave messages.
/**
 * It calls
 * ysk_msgs__msg__CameraSave__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ysk_msgs
void
ysk_msgs__msg__CameraSave__Sequence__fini(ysk_msgs__msg__CameraSave__Sequence * array);

/// Create array of msg/CameraSave messages.
/**
 * It allocates the memory for the array and calls
 * ysk_msgs__msg__CameraSave__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ysk_msgs
ysk_msgs__msg__CameraSave__Sequence *
ysk_msgs__msg__CameraSave__Sequence__create(size_t size);

/// Destroy array of msg/CameraSave messages.
/**
 * It calls
 * ysk_msgs__msg__CameraSave__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ysk_msgs
void
ysk_msgs__msg__CameraSave__Sequence__destroy(ysk_msgs__msg__CameraSave__Sequence * array);

/// Check for msg/CameraSave message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ysk_msgs
bool
ysk_msgs__msg__CameraSave__Sequence__are_equal(const ysk_msgs__msg__CameraSave__Sequence * lhs, const ysk_msgs__msg__CameraSave__Sequence * rhs);

/// Copy an array of msg/CameraSave messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ysk_msgs
bool
ysk_msgs__msg__CameraSave__Sequence__copy(
  const ysk_msgs__msg__CameraSave__Sequence * input,
  ysk_msgs__msg__CameraSave__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // YSK_MSGS__MSG__DETAIL__CAMERA_SAVE__FUNCTIONS_H_
