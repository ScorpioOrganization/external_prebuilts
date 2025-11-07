// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:srv/SaveGeometryToFile.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__SAVE_GEOMETRY_TO_FILE__STRUCT_H_
#define MOVEIT_MSGS__SRV__DETAIL__SAVE_GEOMETRY_TO_FILE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'file_path_and_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SaveGeometryToFile in the package moveit_msgs.
typedef struct moveit_msgs__srv__SaveGeometryToFile_Request
{
  rosidl_runtime_c__String file_path_and_name;
} moveit_msgs__srv__SaveGeometryToFile_Request;

// Struct for a sequence of moveit_msgs__srv__SaveGeometryToFile_Request.
typedef struct moveit_msgs__srv__SaveGeometryToFile_Request__Sequence
{
  moveit_msgs__srv__SaveGeometryToFile_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__SaveGeometryToFile_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SaveGeometryToFile in the package moveit_msgs.
typedef struct moveit_msgs__srv__SaveGeometryToFile_Response
{
  bool success;
} moveit_msgs__srv__SaveGeometryToFile_Response;

// Struct for a sequence of moveit_msgs__srv__SaveGeometryToFile_Response.
typedef struct moveit_msgs__srv__SaveGeometryToFile_Response__Sequence
{
  moveit_msgs__srv__SaveGeometryToFile_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__SaveGeometryToFile_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__SRV__DETAIL__SAVE_GEOMETRY_TO_FILE__STRUCT_H_
