# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/MainMenu_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/MainMenu_autogen.dir/ParseCache.txt"
  "MainMenu_autogen"
  )
endif()
