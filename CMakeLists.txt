cmake_minimum_required(VERSION 3.10)  # 指定最小的cmake版本  
project(main)  # 项目的名字  
  
set(CMAKE_CXX_STANDARD 11)  # 设置C++标准  
  
# 添加源文件  
add_executable(main main.cpp Car.cpp)  
  
# 指定头文件路径  
include_directories(${PROJECT_SOURCE_DIR})