# 设置最低的CMake版本要求
cmake_minimum_required(VERSION 3.0)

set(TARGET http_demo)

#SET(CMAKE_TOOLCHAIN_FILE "D:/tool/vcpkg/vcpkg/scripts/buildsystems/vcpkg.cmake")

# 项目名称
#project(${TARGET})

#if(DEFINED ENV{VCPKG_DEFAULT_TRIPLET} AND NOT DEFINED VCPKG_TARGET_TRIPLET)
#    set(VCPKG_TARGET_TRIPLET "$ENV{VCPKG_DEFAULT_TRIPLET}" CACHE STRING "")
#endif()

file(GLOB_RECURSE EXEC_SOURCES src/main.cpp)

find_package(CURL CONFIG  REQUIRED)

# 添加可执行文件，将main.cpp和Student.cpp编译成一个可执行文件
add_executable(${TARGET} ${EXEC_SOURCES})

target_link_libraries(${TARGET} PRIVATE CURL::libcurl)
#if(CURL_FOUND)
#    message(INFO "CURL library not found")
#else(CURL_FOUND)
#    message(FATAL_ERROR "CURL library not found")
#endif(CURL_FOUND)


# 添加其他可能的编译选项，例如C++标准
# 设置C++标准为C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
