# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Exe_03_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Exe_03_autogen.dir\\ParseCache.txt"
  "Exe_03_autogen"
  )
endif()
