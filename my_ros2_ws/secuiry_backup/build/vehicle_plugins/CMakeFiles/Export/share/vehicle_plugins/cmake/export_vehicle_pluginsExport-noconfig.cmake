#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "vehicle_plugins::vehicle_plugins" for configuration ""
set_property(TARGET vehicle_plugins::vehicle_plugins APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(vehicle_plugins::vehicle_plugins PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libvehicle_plugins.so"
  IMPORTED_SONAME_NOCONFIG "libvehicle_plugins.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS vehicle_plugins::vehicle_plugins )
list(APPEND _IMPORT_CHECK_FILES_FOR_vehicle_plugins::vehicle_plugins "${_IMPORT_PREFIX}/lib/libvehicle_plugins.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)