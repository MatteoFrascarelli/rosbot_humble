# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_action_tutorial_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED action_tutorial_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(action_tutorial_FOUND FALSE)
  elseif(NOT action_tutorial_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(action_tutorial_FOUND FALSE)
  endif()
  return()
endif()
set(_action_tutorial_CONFIG_INCLUDED TRUE)

# output package information
if(NOT action_tutorial_FIND_QUIETLY)
  message(STATUS "Found action_tutorial: 0.0.0 (${action_tutorial_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'action_tutorial' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${action_tutorial_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(action_tutorial_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${action_tutorial_DIR}/${_extra}")
endforeach()
