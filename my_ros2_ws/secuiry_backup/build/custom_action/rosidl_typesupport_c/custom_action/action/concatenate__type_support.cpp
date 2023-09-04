// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from custom_action:action/Concatenate.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "custom_action/action/detail/concatenate__struct.h"
#include "custom_action/action/detail/concatenate__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace custom_action
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Concatenate_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Concatenate_Goal_type_support_ids_t;

static const _Concatenate_Goal_type_support_ids_t _Concatenate_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Concatenate_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Concatenate_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Concatenate_Goal_type_support_symbol_names_t _Concatenate_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_action, action, Concatenate_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_action, action, Concatenate_Goal)),
  }
};

typedef struct _Concatenate_Goal_type_support_data_t
{
  void * data[2];
} _Concatenate_Goal_type_support_data_t;

static _Concatenate_Goal_type_support_data_t _Concatenate_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Concatenate_Goal_message_typesupport_map = {
  2,
  "custom_action",
  &_Concatenate_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Concatenate_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Concatenate_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Concatenate_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Concatenate_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_action

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_action, action, Concatenate_Goal)() {
  return &::custom_action::action::rosidl_typesupport_c::Concatenate_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_action/action/detail/concatenate__struct.h"
// already included above
// #include "custom_action/action/detail/concatenate__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_action
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Concatenate_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Concatenate_Result_type_support_ids_t;

static const _Concatenate_Result_type_support_ids_t _Concatenate_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Concatenate_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Concatenate_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Concatenate_Result_type_support_symbol_names_t _Concatenate_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_action, action, Concatenate_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_action, action, Concatenate_Result)),
  }
};

typedef struct _Concatenate_Result_type_support_data_t
{
  void * data[2];
} _Concatenate_Result_type_support_data_t;

static _Concatenate_Result_type_support_data_t _Concatenate_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Concatenate_Result_message_typesupport_map = {
  2,
  "custom_action",
  &_Concatenate_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Concatenate_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Concatenate_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Concatenate_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Concatenate_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_action

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_action, action, Concatenate_Result)() {
  return &::custom_action::action::rosidl_typesupport_c::Concatenate_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_action/action/detail/concatenate__struct.h"
// already included above
// #include "custom_action/action/detail/concatenate__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_action
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Concatenate_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Concatenate_Feedback_type_support_ids_t;

static const _Concatenate_Feedback_type_support_ids_t _Concatenate_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Concatenate_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Concatenate_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Concatenate_Feedback_type_support_symbol_names_t _Concatenate_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_action, action, Concatenate_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_action, action, Concatenate_Feedback)),
  }
};

typedef struct _Concatenate_Feedback_type_support_data_t
{
  void * data[2];
} _Concatenate_Feedback_type_support_data_t;

static _Concatenate_Feedback_type_support_data_t _Concatenate_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Concatenate_Feedback_message_typesupport_map = {
  2,
  "custom_action",
  &_Concatenate_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Concatenate_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Concatenate_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Concatenate_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Concatenate_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_action

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_action, action, Concatenate_Feedback)() {
  return &::custom_action::action::rosidl_typesupport_c::Concatenate_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_action/action/detail/concatenate__struct.h"
// already included above
// #include "custom_action/action/detail/concatenate__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_action
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Concatenate_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Concatenate_SendGoal_Request_type_support_ids_t;

static const _Concatenate_SendGoal_Request_type_support_ids_t _Concatenate_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Concatenate_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Concatenate_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Concatenate_SendGoal_Request_type_support_symbol_names_t _Concatenate_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_action, action, Concatenate_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_action, action, Concatenate_SendGoal_Request)),
  }
};

typedef struct _Concatenate_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Concatenate_SendGoal_Request_type_support_data_t;

static _Concatenate_SendGoal_Request_type_support_data_t _Concatenate_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Concatenate_SendGoal_Request_message_typesupport_map = {
  2,
  "custom_action",
  &_Concatenate_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Concatenate_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Concatenate_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Concatenate_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Concatenate_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_action

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_action, action, Concatenate_SendGoal_Request)() {
  return &::custom_action::action::rosidl_typesupport_c::Concatenate_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_action/action/detail/concatenate__struct.h"
// already included above
// #include "custom_action/action/detail/concatenate__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_action
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Concatenate_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Concatenate_SendGoal_Response_type_support_ids_t;

static const _Concatenate_SendGoal_Response_type_support_ids_t _Concatenate_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Concatenate_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Concatenate_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Concatenate_SendGoal_Response_type_support_symbol_names_t _Concatenate_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_action, action, Concatenate_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_action, action, Concatenate_SendGoal_Response)),
  }
};

typedef struct _Concatenate_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Concatenate_SendGoal_Response_type_support_data_t;

static _Concatenate_SendGoal_Response_type_support_data_t _Concatenate_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Concatenate_SendGoal_Response_message_typesupport_map = {
  2,
  "custom_action",
  &_Concatenate_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Concatenate_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Concatenate_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Concatenate_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Concatenate_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_action

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_action, action, Concatenate_SendGoal_Response)() {
  return &::custom_action::action::rosidl_typesupport_c::Concatenate_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_action/action/detail/concatenate__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_action
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Concatenate_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Concatenate_SendGoal_type_support_ids_t;

static const _Concatenate_SendGoal_type_support_ids_t _Concatenate_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Concatenate_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Concatenate_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Concatenate_SendGoal_type_support_symbol_names_t _Concatenate_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_action, action, Concatenate_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_action, action, Concatenate_SendGoal)),
  }
};

typedef struct _Concatenate_SendGoal_type_support_data_t
{
  void * data[2];
} _Concatenate_SendGoal_type_support_data_t;

static _Concatenate_SendGoal_type_support_data_t _Concatenate_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Concatenate_SendGoal_service_typesupport_map = {
  2,
  "custom_action",
  &_Concatenate_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Concatenate_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Concatenate_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Concatenate_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Concatenate_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_action

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, custom_action, action, Concatenate_SendGoal)() {
  return &::custom_action::action::rosidl_typesupport_c::Concatenate_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_action/action/detail/concatenate__struct.h"
// already included above
// #include "custom_action/action/detail/concatenate__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_action
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Concatenate_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Concatenate_GetResult_Request_type_support_ids_t;

static const _Concatenate_GetResult_Request_type_support_ids_t _Concatenate_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Concatenate_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Concatenate_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Concatenate_GetResult_Request_type_support_symbol_names_t _Concatenate_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_action, action, Concatenate_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_action, action, Concatenate_GetResult_Request)),
  }
};

typedef struct _Concatenate_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Concatenate_GetResult_Request_type_support_data_t;

static _Concatenate_GetResult_Request_type_support_data_t _Concatenate_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Concatenate_GetResult_Request_message_typesupport_map = {
  2,
  "custom_action",
  &_Concatenate_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Concatenate_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Concatenate_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Concatenate_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Concatenate_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_action

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_action, action, Concatenate_GetResult_Request)() {
  return &::custom_action::action::rosidl_typesupport_c::Concatenate_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_action/action/detail/concatenate__struct.h"
// already included above
// #include "custom_action/action/detail/concatenate__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_action
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Concatenate_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Concatenate_GetResult_Response_type_support_ids_t;

static const _Concatenate_GetResult_Response_type_support_ids_t _Concatenate_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Concatenate_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Concatenate_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Concatenate_GetResult_Response_type_support_symbol_names_t _Concatenate_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_action, action, Concatenate_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_action, action, Concatenate_GetResult_Response)),
  }
};

typedef struct _Concatenate_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Concatenate_GetResult_Response_type_support_data_t;

static _Concatenate_GetResult_Response_type_support_data_t _Concatenate_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Concatenate_GetResult_Response_message_typesupport_map = {
  2,
  "custom_action",
  &_Concatenate_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Concatenate_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Concatenate_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Concatenate_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Concatenate_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_action

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_action, action, Concatenate_GetResult_Response)() {
  return &::custom_action::action::rosidl_typesupport_c::Concatenate_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_action/action/detail/concatenate__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_action
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Concatenate_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Concatenate_GetResult_type_support_ids_t;

static const _Concatenate_GetResult_type_support_ids_t _Concatenate_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Concatenate_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Concatenate_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Concatenate_GetResult_type_support_symbol_names_t _Concatenate_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_action, action, Concatenate_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_action, action, Concatenate_GetResult)),
  }
};

typedef struct _Concatenate_GetResult_type_support_data_t
{
  void * data[2];
} _Concatenate_GetResult_type_support_data_t;

static _Concatenate_GetResult_type_support_data_t _Concatenate_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Concatenate_GetResult_service_typesupport_map = {
  2,
  "custom_action",
  &_Concatenate_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Concatenate_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Concatenate_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Concatenate_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Concatenate_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_action

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, custom_action, action, Concatenate_GetResult)() {
  return &::custom_action::action::rosidl_typesupport_c::Concatenate_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_action/action/detail/concatenate__struct.h"
// already included above
// #include "custom_action/action/detail/concatenate__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_action
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Concatenate_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Concatenate_FeedbackMessage_type_support_ids_t;

static const _Concatenate_FeedbackMessage_type_support_ids_t _Concatenate_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Concatenate_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Concatenate_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Concatenate_FeedbackMessage_type_support_symbol_names_t _Concatenate_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_action, action, Concatenate_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_action, action, Concatenate_FeedbackMessage)),
  }
};

typedef struct _Concatenate_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Concatenate_FeedbackMessage_type_support_data_t;

static _Concatenate_FeedbackMessage_type_support_data_t _Concatenate_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Concatenate_FeedbackMessage_message_typesupport_map = {
  2,
  "custom_action",
  &_Concatenate_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Concatenate_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Concatenate_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Concatenate_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Concatenate_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace custom_action

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_action, action, Concatenate_FeedbackMessage)() {
  return &::custom_action::action::rosidl_typesupport_c::Concatenate_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "custom_action/action/concatenate.h"
// already included above
// #include "custom_action/action/detail/concatenate__type_support.h"

static rosidl_action_type_support_t _custom_action__action__Concatenate__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, custom_action, action, Concatenate)()
{
  // Thread-safe by always writing the same values to the static struct
  _custom_action__action__Concatenate__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, custom_action, action, Concatenate_SendGoal)();
  _custom_action__action__Concatenate__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, custom_action, action, Concatenate_GetResult)();
  _custom_action__action__Concatenate__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _custom_action__action__Concatenate__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, custom_action, action, Concatenate_FeedbackMessage)();
  _custom_action__action__Concatenate__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_custom_action__action__Concatenate__typesupport_c;
}

#ifdef __cplusplus
}
#endif
