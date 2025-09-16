cmake_minimum_required(VERSION 3.10)
project(WorkflowExamples VERSION 1.0)

# Set C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Add the executable
add_executable(main
    src/main.c
    src/addition.c
)

# Include directories
target_include_directories(main PRIVATE src)

# Enable testing
enable_testing()

# Create a library for the addition function to test it separately
add_library(addition_lib src/addition.c)
target_include_directories(addition_lib PUBLIC src)

# Add test executable
add_executable(test_addition
    tests/test_addition.c
)

# Link the test with the library
target_link_libraries(test_addition addition_lib)
target_include_directories(test_addition PRIVATE src)

# Add the test
add_test(NAME AdditionTest COMMAND test_addition)