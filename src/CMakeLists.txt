add_executable(mlir-onnx-toy main.cpp)

target_link_libraries(
  mlir-onnx-toy
  MLIRIR
  MLIRParser
  MLIRFuncDialect
  MLIRArithDialect
)