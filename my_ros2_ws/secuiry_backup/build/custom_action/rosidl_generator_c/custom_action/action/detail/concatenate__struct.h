// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_action:action/Concatenate.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_ACTION__ACTION__DETAIL__CONCATENATE__STRUCT_H_
#define CUSTOM_ACTION__ACTION__DETAIL__CONCATENATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Concatenate in the package custom_action.
typedef struct custom_action__action__Concatenate_Goal
{
  int16_t num_concatenations;
} custom_action__action__Concatenate_Goal;

// Struct for a sequence of custom_action__action__Concatenate_Goal.
typedef struct custom_action__action__Concatenate_Goal__Sequence
{
  custom_action__action__Concatenate_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_action__action__Concatenate_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'final_concatenation'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Concatenate in the package custom_action.
typedef struct custom_action__action__Concatenate_Result
{
  rosidl_runtime_c__String final_concatenation;
} custom_action__action__Concatenate_Result;

// Struct for a sequence of custom_action__action__Concatenate_Result.
typedef struct custom_action__action__Concatenate_Result__Sequence
{
  custom_action__action__Concatenate_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_action__action__Concatenate_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'partial_concatenation'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Concatenate in the package custom_action.
typedef struct custom_action__action__Concatenate_Feedback
{
  rosidl_runtime_c__String partial_concatenation;
} custom_action__action__Concatenate_Feedback;

// Struct for a sequence of custom_action__action__Concatenate_Feedback.
typedef struct custom_action__action__Concatenate_Feedback__Sequence
{
  custom_action__action__Concatenate_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_action__action__Concatenate_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "custom_action/action/detail/concatenate__struct.h"

/// Struct defined in action/Concatenate in the package custom_action.
typedef struct custom_action__action__Concatenate_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  custom_action__action__Concatenate_Goal goal;
} custom_action__action__Concatenate_SendGoal_Request;

// Struct for a sequence of custom_action__action__Concatenate_SendGoal_Request.
typedef struct custom_action__action__Concatenate_SendGoal_Request__Sequence
{
  custom_action__action__Concatenate_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_action__action__Concatenate_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Concatenate in the package custom_action.
typedef struct custom_action__action__Concatenate_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} custom_action__action__Concatenate_SendGoal_Response;

// Struct for a sequence of custom_action__action__Concatenate_SendGoal_Response.
typedef struct custom_action__action__Concatenate_SendGoal_Response__Sequence
{
  custom_action__action__Concatenate_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_action__action__Concatenate_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Concatenate in the package custom_action.
typedef struct custom_action__action__Concatenate_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} custom_action__action__Concatenate_GetResult_Request;

// Struct for a sequence of custom_action__action__Concatenate_GetResult_Request.
typedef struct custom_action__action__Concatenate_GetResult_Request__Sequence
{
  custom_action__action__Concatenate_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_action__action__Concatenate_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "custom_action/action/detail/concatenate__struct.h"

/// Struct defined in action/Concatenate in the package custom_action.
typedef struct custom_action__action__Concatenate_GetResult_Response
{
  int8_t status;
  custom_action__action__Concatenate_Result result;
} custom_action__action__Concatenate_GetResult_Response;

// Struct for a sequence of custom_action__action__Concatenate_GetResult_Response.
typedef struct custom_action__action__Concatenate_GetResult_Response__Sequence
{
  custom_action__action__Concatenate_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_action__action__Concatenate_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "custom_action/action/detail/concatenate__struct.h"

/// Struct defined in action/Concatenate in the package custom_action.
typedef struct custom_action__action__Concatenate_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  custom_action__action__Concatenate_Feedback feedback;
} custom_action__action__Concatenate_FeedbackMessage;

// Struct for a sequence of custom_action__action__Concatenate_FeedbackMessage.
typedef struct custom_action__action__Concatenate_FeedbackMessage__Sequence
{
  custom_action__action__Concatenate_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_action__action__Concatenate_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_ACTION__ACTION__DETAIL__CONCATENATE__STRUCT_H_
