#!/bin/bash

# 创建构建目录
mkdir -p build
cd build

# 生成构建文件
cmake ..

# 编译项目
cmake --build .

# 返回上级目录
cd ..

# 如果编译成功，运行程序
if [ $? -eq 0 ]; then
    echo "编译成功！正在运行程序..."
    ./bin/MyProject
else
    echo "编译失败！"
fi 