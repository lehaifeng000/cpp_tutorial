# 设置最低的CMake版本要求
cmake_minimum_required(VERSION 3.0)

set(TARGET so_demo)

# 项目名称
project(${TARGET})

add_library(mytool SHARED libs/tool.cpp libs/tool.h)
# # Define the symbols for the export.
# target_compile_definitions(mytool PRIVATE BUILD_DLL)

# # Set the C++ standard to C++11
# set_target_properties(mytool PROPERTIES
#   CXX_STANDARD 11
#   CXX_STANDARD_REQUIRED ON
#   CXX_EXTENSIONS OFF
# )

# file(GLOB_RECURSE EXEC_SOURCES src/main.cpp)

# 添加可执行文件，将main.cpp和Student.cpp编译成一个可执行文件
add_executable(${TARGET} src/main.cpp libs/tool.cpp)

# 指定可执行文件依赖的头文件目录
target_include_directories(${TARGET} PRIVATE ${PROJECT_SOURCE_DIR}/libs)

# 添加其他可能的编译选项，例如C++标准
# 设置C++标准为C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
