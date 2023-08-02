project(VToolBase)
set(LIBRARY_OUTPUT_PATH ${PUT_PATH})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../VCommand)
link_directories(${PUT_PATH})
add_library(VToolBase
SHARED 
"ToolBase_global.h"
"ToolBase.h"
"ToolBase.cpp"
)
target_link_libraries(VToolBase VCommand)