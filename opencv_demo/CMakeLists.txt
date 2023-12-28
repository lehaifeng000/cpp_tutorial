# 设置最低的CMake版本要求
cmake_minimum_required(VERSION 3.0)

set(TARGET opencv_demo)

set(CMAKE_TOOLCHAIN_FILE "/home/lehaifeng/install/vcpkg/scripts/buildsystems/vcpkg.cmake")

# 项目名称
project(${TARGET})

file(GLOB_RECURSE EXEC_SOURCES src/main.cpp)

if (DEFINED VCPKG_INSTALLED_DIR)
    message("VCPKG_INSTALLED_DIR: ${VCPKG_INSTALLED_DIR}")
else ()
    message("not defined VCPKG_INSTALLED_DIR")
endif ()

set(OpenCV_DIR "${VCPKG_INSTALLED_DIR}/x64-windows/share/opencv4")
find_package(OpenCV REQUIRED)

#include_directories( ${OpenCV_INCLUDE_DIRS} )

# 添加可执行文件，将main.cpp和Student.cpp编译成一个可执行文件
add_executable(${TARGET} ${EXEC_SOURCES})

if (DEFINED OpenCV_LIBS)
    message("OpenCV_LIBS: ${OpenCV_LIBS}")
    target_link_libraries(${TARGET} PRIVATE ${OpenCV_LIBS})
else ()
    message("not defined OpenCV_LIBS")
endif ()

# 添加其他可能的编译选项，例如C++标准
# 设置C++标准为C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
