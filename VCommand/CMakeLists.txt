project(VCommand)


set(LIBRARY_OUTPUT_PATH ${PUT_PATH})
add_library(VCommand 
SHARED 
"Command_global.h"
"Command.h"
"Command.cpp"
)