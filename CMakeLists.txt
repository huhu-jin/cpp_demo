# cmake 最低版本需求
cmake_minimum_required(VERSION 3.13)
# 工程名称
project(cpp_test)
# 设置
set(CMAKE_CXX_STANDARD 11)

include_directories(src)

add_subdirectory(src/base64)



# 编译源码生成目标
add_executable(
        cpp_test
        src/main.cpp
        src/Limits.cpp
)

target_link_libraries(
    cpp_test
    BASE64
)