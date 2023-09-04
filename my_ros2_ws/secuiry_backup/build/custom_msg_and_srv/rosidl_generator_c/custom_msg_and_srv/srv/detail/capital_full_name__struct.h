// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msg_and_srv:srv/CapitalFullName.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG_AND_SRV__SRV__DETAIL__CAPITAL_FULL_NAME__STRUCT_H_
#define CUSTOM_MSG_AND_SRV__SRV__DETAIL__CAPITAL_FULL_NAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'surname'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CapitalFullName in the package custom_msg_and_srv.
typedef struct custom_msg_and_srv__srv__CapitalFullName_Request
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String surname;
} custom_msg_and_srv__srv__CapitalFullName_Request;

// Struct for a sequence of custom_msg_and_srv__srv__CapitalFullName_Request.
typedef struct custom_msg_and_srv__srv__CapitalFullName_Request__Sequence
{
  custom_msg_and_srv__srv__CapitalFullName_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msg_and_srv__srv__CapitalFullName_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'capitalfullname'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CapitalFullName in the package custom_msg_and_srv.
typedef struct custom_msg_and_srv__srv__CapitalFullName_Response
{
  rosidl_runtime_c__String capitalfullname;
} custom_msg_and_srv__srv__CapitalFullName_Response;

// Struct for a sequence of custom_msg_and_srv__srv__CapitalFullName_Response.
typedef struct custom_msg_and_srv__srv__CapitalFullName_Response__Sequence
{
  custom_msg_and_srv__srv__CapitalFullName_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msg_and_srv__srv__CapitalFullName_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSG_AND_SRV__SRV__DETAIL__CAPITAL_FULL_NAME__STRUCT_H_
