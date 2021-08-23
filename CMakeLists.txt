cmake_minimum_required(VERSION 3.0.0)
project(cpp_tutorial VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(main main.cpp)
add_executable(datatypes datatypes.cpp)
add_executable(vector vector.cpp)
add_executable(characters characters.cpp)
add_executable(strings strings.cpp)
add_executable(classes classes.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
