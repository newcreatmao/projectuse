cmake_minimum_required(VERSION 3.10)

project(MyProject)

# 查找WiringPi库
find_library(WIRINGPI_LIB wiringPi)

# 添加可执行文件
add_executable(MyExecutable main.cpp)

# 链接WiringPi库
target_link_libraries(MyExecutable ${WIRINGPI_LIB})