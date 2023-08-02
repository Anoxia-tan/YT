project(MainTest)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# list(APPEND CMAKE_MODULE_PATH "$ENV{QT5_DIR}")
set(CMAKE_PREFIX_PATH $ENV{QT5_DIR})
find_package(QT NAMES Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt5 COMPONENTS Widgets REQUIRED )
link_directories(${PUT_PATH})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../VCommand)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../VToolBase)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../VPartTool)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../VToolMgr)
set(EXECUTABLE_OUTPUT_PATH ${PUT_PATH})
# set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT MainTest)
add_executable(
    MainTest 
    "main.cc"
    "mainwindow.h"
    "mainwindow.cpp" 
    "mainwindow.ui"
    )
target_link_libraries(MainTest VToolMgr VCommand VPartTool VToolBase Qt5::Widgets)