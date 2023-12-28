cmake_minimum_required(VERSION 3.0)

# 设置构建类型为 Debug
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_TOOLCHAIN_FILE "/home/lehaifeng/install/vcpkg/scripts/buildsystems/vcpkg.cmake")

project(vec_lib)

find_package(Eigen3 CONFIG REQUIRED)

include_directories(src/base)

add_executable(main src/main.cpp src/base/vec_library.cpp)

target_link_libraries(main PRIVATE Eigen3::Eigen)