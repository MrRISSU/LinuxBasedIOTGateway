# Define the library target and list its source files
add_library(logger src/logger.cpp)

# Specifying 'PUBLIC' ensures that any target linking to 'logger'
# inherits this include directory (so they can do #include "logger.hpp")
target_include_directories(logger PUBLIC include)
