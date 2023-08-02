project(VPartTool)
set(LIBRARY_OUTPUT_PATH ${PUT_PATH})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../VCommand)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../VToolBase)
link_directories(${PUT_PATH})
add_library(VPartTool 
SHARED 
"PartTool_global.h"
"STool.h"
"STool.cpp"
)
target_link_libraries(VPartTool VToolBase VCommand)