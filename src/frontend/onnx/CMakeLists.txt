set(TARGET_NAME "frontend_onnx")

########### add user defined library
file(GLOB_RECURSE LIBRARY_SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
file(GLOB_RECURSE PUBLIC_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/*.hpp)

add_library(${TARGET_NAME} STATIC ${LIBRARY_SRC} ${PUBLIC_HEADERS})

########### include external libraries and link
set(ONNX_COMMON_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
# set(ONNX_COMMON_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
include_directories(${ONNX_COMMON_INCLUDE_DIR})

target_link_libraries(${TARGET_NAME} PUBLIC onnx_proto onnx)