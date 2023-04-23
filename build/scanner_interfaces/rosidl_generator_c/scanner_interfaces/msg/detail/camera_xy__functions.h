// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from scanner_interfaces:msg/CameraXY.idl
// generated code does not contain a copyright notice

#ifndef SCANNER_INTERFACES__MSG__DETAIL__CAMERA_XY__FUNCTIONS_H_
#define SCANNER_INTERFACES__MSG__DETAIL__CAMERA_XY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "scanner_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "scanner_interfaces/msg/detail/camera_xy__struct.h"

/// Initialize msg/CameraXY message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * scanner_interfaces__msg__CameraXY
 * )) before or use
 * scanner_interfaces__msg__CameraXY__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_scanner_interfaces
bool
scanner_interfaces__msg__CameraXY__init(scanner_interfaces__msg__CameraXY * msg);

/// Finalize msg/CameraXY message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scanner_interfaces
void
scanner_interfaces__msg__CameraXY__fini(scanner_interfaces__msg__CameraXY * msg);

/// Create msg/CameraXY message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * scanner_interfaces__msg__CameraXY__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scanner_interfaces
scanner_interfaces__msg__CameraXY *
scanner_interfaces__msg__CameraXY__create();

/// Destroy msg/CameraXY message.
/**
 * It calls
 * scanner_interfaces__msg__CameraXY__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scanner_interfaces
void
scanner_interfaces__msg__CameraXY__destroy(scanner_interfaces__msg__CameraXY * msg);

/// Check for msg/CameraXY message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scanner_interfaces
bool
scanner_interfaces__msg__CameraXY__are_equal(const scanner_interfaces__msg__CameraXY * lhs, const scanner_interfaces__msg__CameraXY * rhs);

/// Copy a msg/CameraXY message.
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
ROSIDL_GENERATOR_C_PUBLIC_scanner_interfaces
bool
scanner_interfaces__msg__CameraXY__copy(
  const scanner_interfaces__msg__CameraXY * input,
  scanner_interfaces__msg__CameraXY * output);

/// Initialize array of msg/CameraXY messages.
/**
 * It allocates the memory for the number of elements and calls
 * scanner_interfaces__msg__CameraXY__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_scanner_interfaces
bool
scanner_interfaces__msg__CameraXY__Sequence__init(scanner_interfaces__msg__CameraXY__Sequence * array, size_t size);

/// Finalize array of msg/CameraXY messages.
/**
 * It calls
 * scanner_interfaces__msg__CameraXY__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scanner_interfaces
void
scanner_interfaces__msg__CameraXY__Sequence__fini(scanner_interfaces__msg__CameraXY__Sequence * array);

/// Create array of msg/CameraXY messages.
/**
 * It allocates the memory for the array and calls
 * scanner_interfaces__msg__CameraXY__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scanner_interfaces
scanner_interfaces__msg__CameraXY__Sequence *
scanner_interfaces__msg__CameraXY__Sequence__create(size_t size);

/// Destroy array of msg/CameraXY messages.
/**
 * It calls
 * scanner_interfaces__msg__CameraXY__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scanner_interfaces
void
scanner_interfaces__msg__CameraXY__Sequence__destroy(scanner_interfaces__msg__CameraXY__Sequence * array);

/// Check for msg/CameraXY message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scanner_interfaces
bool
scanner_interfaces__msg__CameraXY__Sequence__are_equal(const scanner_interfaces__msg__CameraXY__Sequence * lhs, const scanner_interfaces__msg__CameraXY__Sequence * rhs);

/// Copy an array of msg/CameraXY messages.
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
ROSIDL_GENERATOR_C_PUBLIC_scanner_interfaces
bool
scanner_interfaces__msg__CameraXY__Sequence__copy(
  const scanner_interfaces__msg__CameraXY__Sequence * input,
  scanner_interfaces__msg__CameraXY__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SCANNER_INTERFACES__MSG__DETAIL__CAMERA_XY__FUNCTIONS_H_