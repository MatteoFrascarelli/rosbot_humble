// generated from
// rosidl_typesupport_introspection_c/resource/rosidl_typesupport_introspection_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef PUBLISHER_AND_SUBSCRIBER__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_
#define PUBLISHER_AND_SUBSCRIBER__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_publisher_and_subscriber __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_publisher_and_subscriber __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_publisher_and_subscriber __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_publisher_and_subscriber __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_INTROSPECTION_C_BUILDING_DLL_publisher_and_subscriber
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_publisher_and_subscriber ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_publisher_and_subscriber
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_publisher_and_subscriber ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_publisher_and_subscriber
  #endif
#else
  #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_publisher_and_subscriber __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_publisher_and_subscriber
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_publisher_and_subscriber __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_publisher_and_subscriber
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // PUBLISHER_AND_SUBSCRIBER__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_
