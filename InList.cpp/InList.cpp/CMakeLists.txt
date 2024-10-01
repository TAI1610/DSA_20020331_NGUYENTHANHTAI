# CMakeList.txt : CMake project for InList.cpp, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (InList.cpp "InList.cpp.cpp" "InList.cpp.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET InList.cpp PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
