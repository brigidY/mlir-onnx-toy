set(LLVM_RUNTIME_OUTPUT_INTDIR ${CMAKE_BINARY_DIR})

# include dialect's directory for including toy Dialect
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/dialect)
include_directories(${CMAKE_CURRENT_BINARY_DIR}/dialect)

add_subdirectory(dialect/toy)
add_subdirectory(lib)
add_subdirectory(tools)