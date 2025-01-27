cmake_minimum_required(VERSION 3.0)
project(InventoryManagementSystem)

set(CMAKE_CXX_STANDARD 17)

add_executable(InventoryManagementSystem src/main.cpp
        src/Product/Product.h
        src/Product/Product.cpp)

add_custom_target(doc
        COMMAND doxygen ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        COMMENT "Generating API documentation with Doxygen"
)

# Add GoogleTest as a subdirectory
add_subdirectory(external/googletest)

# Link GoogleTest with your executable
target_link_libraries(InventoryManagementSystem gtest gtest_main)
