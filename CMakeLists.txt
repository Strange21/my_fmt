cmake_minimum_required(VERSION 3.12)
project(fmt_demo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add fmt as subdirectory (assumes you've cloned fmt into the project)
add_subdirectory(fmt)

add_executable(fmt_example main.cpp)
target_link_libraries(fmt_example PRIVATE fmt::fmt)
