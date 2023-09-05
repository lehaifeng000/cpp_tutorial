# 设置最低的CMake版本要求
cmake_minimum_required(VERSION 3.0)

# 项目名称
project(json_demo)


file(GLOB_RECURSE EXEC_SOURCES src/main.cpp)
file(GLOB_RECURSE LIB_SOURCES src/*/*.cpp)
# file(GLOB_RECURSE LIB_HEADERS src/*/*.h)

# 添加可执行文件，将main.cpp和Student.cpp编译成一个可执行文件
add_executable(main ${EXEC_SOURCES} ${LIB_SOURCES})

# # 指定可执行文件依赖的头文件目录
target_include_directories(main PRIVATE ${PROJECT_SOURCE_DIR}/include)
# target_include_directories(main PRIVATE ${PROJECT_SOURCE_DIR}/src/libs)

# 添加其他可能的编译选项，例如C++标准
# 设置C++标准为C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
