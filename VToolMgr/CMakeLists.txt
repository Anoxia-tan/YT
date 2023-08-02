project(VToolMgr)
set(LIBRARY_OUTPUT_PATH ${PUT_PATH})
add_library(VToolMgr 
SHARED 
"ToolMgr_global.h"
"ToolMgr.h"
"ToolMgr.cpp"
)