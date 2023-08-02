cmake_minimum_required(VERSION 3.12.1)
#设置
set(PUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/output)
#添加子目录
add_subdirectory(VCommand)
add_subdirectory(VToolBase)
add_subdirectory(VPartTool)
add_subdirectory(VToolMgr)
add_subdirectory(MainTest)