set(LLVM_RUNTIME_OUTPUT_INTDIR ${CMAKE_BINARY_DIR})

# include dialect's directory for including toy Dialect
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/tablegen/dialect)
include_directories(${CMAKE_CURRENT_BINARY_DIR}/tablegen/dialect)

add_subdirectory(tablegen/dialect/toy)
add_subdirectory(lib)
add_subdirectory(tools)