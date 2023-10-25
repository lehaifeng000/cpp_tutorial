# 设置最低的CMake版本要求
cmake_minimum_required(VERSION 3.0)

# 项目名称
project(cpp_tutorial)

add_subdirectory(hello_world)
add_subdirectory(json_demo)
add_subdirectory(struct_demo)
add_subdirectory(xml_demo)


# 添加其他可能的编译选项，例如C++标准
# 设置C++标准为C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
