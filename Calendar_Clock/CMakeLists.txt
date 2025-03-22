# CMakeList.txt : CMake project for Calendar_Clock, include source and define
# project specific logic here.
#
cmake_minimum_required(VERSION 3.10)
# Enable Hot Reload for MSVC compilers if supported.

if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project(Calendar_Clock)

set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/header)

# Source files
file(GLOB_RECURSE SOURCES ${PROJECT_SOURCE_DIR}/src/*.cpp)
file(GLOB_RECURSE HEADERS ${PROJECT_SOURCE_DIR}/header/*.hpp)

# Add executable
add_executable(Calendar_Clock ${SOURCES} ${HEADERS})

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Calendar_Clock PROPERTY CXX_STANDARD 20)
endif()