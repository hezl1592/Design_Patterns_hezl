# cmake版本要求
cmake_minimum_required (VERSION 2.8)
# 当前工程名称
project(builder)

message("")
# 资源目录
message(STATUS "SOURCE DIR: " ${PROJECT_SOURCE_DIR})

# 设置源文件变量, 并添加文件（多个）
# set(src_list xxx.cpp xxx.cpp xx.cpp)
set(src_list main.cpp Builder.cpp)
# 目标可执行文件
# 可执行文件的输出目录
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(target_file ${PROJECT_NAME})

# 打印提示信息
message(STATUS "SOURCE: " ${src_list})
message(STATUS "TARGET: " ${EXECUTABLE_OUTPUT_PATH}/${target_file})
message("")

# 设置C++编译参数(CMAKE_CXX_FLAGS是全局变量)
set(CMAKE_CXX_FLAGS "-Wall -std=c++11")

#指定头文件目录位置
# INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include)
#添加共享库搜索路径
# LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/lib)

# 设置头文件位置，相当于g++ -I，可以用相对或绝对路径，也可以用自定义的变量值
# include_directories(${})

# 使用给定的源文件，为工程引入一个可执行文件test。
add_executable(${target_file} ${src_list})