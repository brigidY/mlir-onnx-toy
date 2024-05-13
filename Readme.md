```
cmake -G Ninja ../llvm \                                                      
  -DCMAKE_INSTALL_PREFIX=/home/shji/codes/mlir-onnx-toy/install \
  -DLLVM_ENABLE_PROJECTS=mlir \
  -DLLVM_BUILD_EXAMPLES=ON \
  -DLLVM_TARGETS_TO_BUILD="Native;NVPTX;AMDGPU" \
  -DCMAKE_BUILD_TYPE=Release \
  -DLLVM_ENABLE_ASSERTIONS=ON
```

```
ninja install
```

```
cmake .. -GNinja -DCMAKE_INSTALL_PREFIX=/home/shji/codes/mlir-onnx-toy/install
```


