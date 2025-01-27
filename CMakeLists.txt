cmake_minimum_required(VERSION 3.0)
project(InventoryManagementSystem)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Create the main executable for your project
add_executable(InventoryManagementSystem src/main.cpp
        src/Product/Product.h
        src/Product/Product.cpp
        src/ProductNode/ProductNode.cpp
        src/ProductNode/ProductNode.h)

# Add GoogleTest as a subdirectory (assumes GoogleTest is in the external/googletest folder)
add_subdirectory(external/googletest)

# Enable testing for the project
enable_testing()

# Automatically find all .cpp files in the tests directory
file(GLOB TEST_SOURCES tests/*.cpp)

# Create a test executable that includes all the test files in the tests folder
add_executable(all_tests ${TEST_SOURCES} src/Product/Product.cpp
        src/ProductNode/ProductNode.cpp
        src/ProductNode/ProductNode.h)

# Link GoogleTest with the test executable
target_link_libraries(all_tests gtest gtest_main)

# Register the tests with CTest (this will automatically run all tests)
add_test(NAME AllTests COMMAND all_tests)

# Optional: Custom target to generate documentation using Doxygen
add_custom_target(doc
        COMMAND doxygen ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        COMMENT "Generating API documentation with Doxygen"
)
