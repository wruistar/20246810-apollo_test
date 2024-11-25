cmake_minimum_required(VERSION 3.10)

# 设置项目名称
project(MyProject)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 添加头文件路径
include_directories(${PROJECT_SOURCE_DIR}/include)

# 添加源文件
file(GLOB SOURCES "src/*.cpp")

# 设置输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

# 添加可执行文件
add_executable(${PROJECT_NAME} ${SOURCES})

# 设置编译选项，确保 UTF-8 编码
if(MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE /utf-8)
endif()