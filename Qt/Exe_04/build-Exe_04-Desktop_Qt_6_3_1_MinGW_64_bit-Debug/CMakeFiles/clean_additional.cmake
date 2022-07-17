# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Exe_04_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Exe_04_autogen.dir\\ParseCache.txt"
  "Exe_04_autogen"
  )
endif()
