// header file of operations of toy dialect

#pragma once
#include "mlir/IR/BuiltinOps.h"
#include "mlir/IR/Builders.h"
// td 里面 include 的，这里也要 include 对应的 h 文件
#include "toy/ToyDialect.h"
#include "mlir/Interfaces/SideEffectInterfaces.h"
#define GET_OP_CLASSES
#include "toy/Toy.h.inc"