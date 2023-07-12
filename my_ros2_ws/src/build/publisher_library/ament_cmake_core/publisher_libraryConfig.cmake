# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_publisher_library_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED publisher_library_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(publisher_library_FOUND FALSE)
  elseif(NOT publisher_library_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(publisher_library_FOUND FALSE)
  endif()
  return()
endif()
set(_publisher_library_CONFIG_INCLUDED TRUE)

# output package information
if(NOT publisher_library_FIND_QUIETLY)
  message(STATUS "Found publisher_library: 0.0.0 (${publisher_library_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'publisher_library' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${publisher_library_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(publisher_library_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_targets-extras.cmake")
foreach(_extra ${_extras})
  include("${publisher_library_DIR}/${_extra}")
endforeach()
