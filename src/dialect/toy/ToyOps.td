// Define toy operations

include "mlir/IR/OpBase.td"
include "toy/ToyDialect.td"
include "mlir/Interfaces/SideEffectInterfaces.td"

// mnemonic 指名字
// Pure 是 Trait，表示没有 SideEffect 的纯函数
class Toy_Op<string mnemonic, list<Trait> traits = []> :
  Op<ToyDialect, mnemonic, traits>;

class Toy_LayerOp<string mnemonic, list<Trait> traits = []> :
    Toy_Op<mnemonic, [Pure]> {
       let assemblyFormat = [{
        `(` operands `)` attr-dict `:` type(operands) `->` type(results)
    }]; 
}

def AddOp : Toy_LayerOp<"add"> {
  let summary = "add operation";

  let arguments = (ins Variadic<AnyInteger>:$inputs);
  
  let results = (outs AnyInteger:$result);
}