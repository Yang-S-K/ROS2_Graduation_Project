// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ysk_msgs:msg/YUVValue.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__MSG__DETAIL__YUV_VALUE__FUNCTIONS_H_
#define YSK_MSGS__MSG__DETAIL__YUV_VALUE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ysk_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ysk_msgs/msg/detail/yuv_value__struct.h"

/// Initialize msg/YUVValue message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ysk_msgs__msg__YUVValue
 * )) before or use
 * ysk_msgs__msg__YUVValue__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ysk_msgs
bool
ysk_msgs__msg__YUVValue__init(ysk_msgs__msg__YUVValue * msg);

/// Finalize msg/YUVValue message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ysk_msgs
void
ysk_msgs__msg__YUVValue__fini(ysk_msgs__msg__YUVValue * msg);

/// Create msg/YUVValue message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ysk_msgs__msg__YUVValue__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ysk_msgs
ysk_msgs__msg__YUVValue *
ysk_msgs__msg__YUVValue__create();

/// Destroy msg/YUVValue message.
/**
 * It calls
 * ysk_msgs__msg__YUVValue__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ysk_msgs
void
ysk_msgs__msg__YUVValue__destroy(ysk_msgs__msg__YUVValue * msg);

/// Check for msg/YUVValue message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ysk_msgs
bool
ysk_msgs__msg__YUVValue__are_equal(const ysk_msgs__msg__YUVValue * lhs, const ysk_msgs__msg__YUVValue * rhs);

/// Copy a msg/YUVValue message.
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
ysk_msgs__msg__YUVValue__copy(
  const ysk_msgs__msg__YUVValue * input,
  ysk_msgs__msg__YUVValue * output);

/// Initialize array of msg/YUVValue messages.
/**
 * It allocates the memory for the number of elements and calls
 * ysk_msgs__msg__YUVValue__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ysk_msgs
bool
ysk_msgs__msg__YUVValue__Sequence__init(ysk_msgs__msg__YUVValue__Sequence * array, size_t size);

/// Finalize array of msg/YUVValue messages.
/**
 * It calls
 * ysk_msgs__msg__YUVValue__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ysk_msgs
void
ysk_msgs__msg__YUVValue__Sequence__fini(ysk_msgs__msg__YUVValue__Sequence * array);

/// Create array of msg/YUVValue messages.
/**
 * It allocates the memory for the array and calls
 * ysk_msgs__msg__YUVValue__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ysk_msgs
ysk_msgs__msg__YUVValue__Sequence *
ysk_msgs__msg__YUVValue__Sequence__create(size_t size);

/// Destroy array of msg/YUVValue messages.
/**
 * It calls
 * ysk_msgs__msg__YUVValue__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ysk_msgs
void
ysk_msgs__msg__YUVValue__Sequence__destroy(ysk_msgs__msg__YUVValue__Sequence * array);

/// Check for msg/YUVValue message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ysk_msgs
bool
ysk_msgs__msg__YUVValue__Sequence__are_equal(const ysk_msgs__msg__YUVValue__Sequence * lhs, const ysk_msgs__msg__YUVValue__Sequence * rhs);

/// Copy an array of msg/YUVValue messages.
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
ysk_msgs__msg__YUVValue__Sequence__copy(
  const ysk_msgs__msg__YUVValue__Sequence * input,
  ysk_msgs__msg__YUVValue__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // YSK_MSGS__MSG__DETAIL__YUV_VALUE__FUNCTIONS_H_
