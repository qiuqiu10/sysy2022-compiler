# IR

@yangkai21, @youw21

> Based on TAC + SSA

- [IR](#ir)
  - [Design](#design)
  - [Code](#code)
    - [Data.h](#datah)
    - [Temp.h](#temph)
    - [Module.h](#moduleh)
    - [Function.h](#functionh)
    - [BasicBlock.h](#basicblockh)
    - [Instruction.h](#instructionh)
  - [Appendix](#appendix)
    - [LLVM](#llvm)
    - [SSA](#ssa)
      - [Plan1 - SSA](#plan1---ssa)
      - [Plan2 - Alloca \& Load \& Store](#plan2---alloca--load--store)
      - [Plan3 - MEM2REG](#plan3---mem2reg)
        - [工作流程](#工作流程)
        - [实现方式](#实现方式)


## Design

请先阅读 [LLVM](#llvm), [SSA](#ssa) 重点关注其中 LLVM 的架构以及 SSA 的相关内容。

参考 [LLVM 中的 IR 结构设计](https://www.llvm.org/docs/ProgrammersManual.html#the-core-llvm-class-hierarchy-reference)

## Code

> 代码实现细节

### Data.h

DataType | ```enum``` 类型，用于表示数据类型
> Var
> 
> VarPtr
> 
> Array
> 
> ArrayPtr

VarType | ```enum``` 类型，用于表示变量类型
> Int
> 
> Float
> 
> Double
> 
> Char
> 
> Bool
> 
> Void

DataMeta | ```class``` 类型，用于表示数据的元信息
> DataType data_type_ 
> 
> VarType var_type_
> 
> bool is_global_ 是否是全局变量
> 
> bool is_constant_ 是否是常量
> 
> std::string name_ 变量名称

DataVar : DataMeta | ```class``` 类型，用于表示单个变量

DataArray : DataMeta | ```class``` 类型，用于表示数组变量
> std::vector<int> dims_ 数组维度 每一维的大小

### Temp.h

TempMeta | ```class``` 类型，用于表示临时寄存器的元信息
> int index_ 临时寄存器的编号

TempVar : TempMeta, DataVar | ```class``` 类型，用于表示单个临时寄存器

TempArray : TempMeta, DataArray | ```class``` 类型，用于表示数组临时寄存器

TempArrayElement : TempMeta, DataArray | ```class``` 类型，用于表示数组元素临时寄存器
> TempArray *parent_ 指向父数组的指针
> 
> 此处继承的 DataArray 为该数组元素的坐标

### Module.h

Module | ```class``` 类型，用于表示一个模块
> std::vector<Function*> functions_ 模块内部的函数列表
> 
> std::vector<DataMeta*> global_variables_ 模块内部的全局变量列表

### Function.h 

Function | ```class``` 类型，用于表示一个函数
> VarType ret_type_ 返回值类型
> 
> Module *parent_ 指向父模块的指针
> 
> std::vector<DataMeta*> arguments_ 函数参数列表
> 
> std::vector<BasicBlock*> basic_blocks_ 函数内部的基本块列表
> 
> std::vector<Instruction*> instructions_ 函数内部的指令列表

### BasicBlock.h

BasicBlock | ```class``` 类型，用于表示一个基本块
> Function* parent_ 指向父函数的指针
> 
> std::vector<Instruction*> instructions_ 基本块内部的指令列表
> 
> std::vector<TempMeta*> live_in 基本块的 live_in 列表
> 
> std::vector<TempMeta*> live_out 基本块的 live_out 列表
> 
> std::vector<TempMeta*> live_use 基本块的 live_use 列表

### Instruction.h

IRInstrKind | ```enum``` 类型，用于表示指令类型
> IRInstr_LABEL
> 
> IRInstr_SEQ
> 
> IRInstr_JMP
> 
> IRInstr_JMP_COND
> 
> IRInstr_CALL
> 
> IRInstr_RET

IRInstrUnary | ```enum``` 类型，用于表示一元运算类型
> IRInstr_NEG
> 
> IRInstr_BITNOT
> 
> IRInstr_LOGICNOT

IRInstrBinary | ```enum``` 类型，用于表示二元运算类型
> IRInstr_AND
> 
> IRInstr_OR
> 
> IRInstr_XOR
> 
> IRInstr_ADD
> 
> IRInstr_SUB
> 
> IRInstr_MUL
> 
> IRInstr_DIV
> 
> IRInstr_MOD
> 
> IRInstr_EQU
> 
> IRInstr_NEQ
> 
> IRInstr_SLT
> 
> IRInstr_LEQ
> 
> IRInstr_SGT
> 
> IRInstr_GEQ

IRInstrCondBranch | ```enum``` 类型，用于表示条件跳转类型
> IRInstr_BEQ
> 
> IRInstr_BNE

Instruction | ```class``` 类型，用于表示一条指令的基类
> BasicBlock* parent_ 指向父基本块的指针
> 
> IRInstrKind instrkind_ 指令类型
> 
> std::vector<TempMeta*> dsts_ 目标寄存器列表
> 
> std::vector<TempMeta*> srcs_ 源寄存器列表

Assign : Instruction | ```class``` 类型，用于表示赋值指令
> TempMeta* dst_ 目标寄存器
> 
> TempMeta* src_ 源寄存器

LoadImm4 : Instruction | ```class``` 类型，用于表示加载立即数指令
> TempMeta* dst_ 目标寄存器
> 
> int imm_ 立即数

Unary : Instruction | ```class``` 类型，用于表示一元运算指令
> IRInstrUnary type_ 一元运算类型
> 
> TempMeta* dst_ 目标寄存器
> 
> TempMeta* src_ 源寄存器

Binary : Instruction | ```class``` 类型，用于表示二元运算指令
> IRInstrBinary type_ 二元运算类型
> 
> TempMeta* dst_ 目标寄存器
> 
> TempMeta* lhs_ 源寄存器1
> 
> TempMeta* rhs_ 源寄存器2

Call : Instruction | ```class``` 类型，用于表示函数调用指令
> TempMeta* dst_ 目标寄存器
> 
> Label* func_ 函数标签

Label : Instruction | ```class``` 类型，用于表示标签指令
> std::string label_ 标签名称

Branch : Instruction | ```class``` 类型，用于表示无条件跳转指令
> Label* label_ 跳转标签

CondBranch : Instruction | ```class``` 类型，用于表示条件跳转指令
> IRInstrCondBranch type_ 条件跳转类型
> 
> TempMeta* cond_ 条件寄存器
> 
> Label* label_ 跳转标签

Return : Instruction | ```class``` 类型，用于表示返回指令
> TempMeta* value_ 返回值寄存器

Alloca : Instruction | ```class``` 类型，用于表示分配内存指令
> TempMeta* addr_ 目标地址寄存器

Store : Instruction | ```class``` 类型，用于表示存储指令
> TempMeta* addr_ 目标地址寄存器
> 
> TempMeta* src_ 源寄存器

Load : Instruction | ```class``` 类型，用于表示加载指令
> TempMeta* dst_ 目标寄存器
> 
> TempMeta* addr_ 原地址寄存器

Phi : Instruction | ```class``` 类型，用于表示 Phi 指令
> TempMeta* dst_ 目标寄存器
> 
> std::vector<TempMeta*> values_ 源寄存器列表
> 
> std::vector<Label*> labels_ 标签列表

## Appendix

### LLVM

* [LLVM : Architecture](https://www.llvm.org/docs/ProgrammersManual.html#the-core-llvm-class-hierarchy-reference)

* [LLVM : IR](https://buaa-se-compiling.github.io/miniSysY-tutorial/pre/llvm_ir_quick_primer.html)

* [LLVM : Value User and Use](https://buaa-se-compiling.github.io/miniSysY-tutorial/pre/design_hints.html)

### SSA

#### Plan1 - SSA

静态单赋值 Static Single Assignment

程序中每个变量在使用之前只被赋值一次

[如下是一个例子](https://decaf-lang.github.io/minidecaf-tutorial/docs/step14/intro.html)

```
_L0:
  _T0 = 0
  _T1 = 1
  _T2 = 2
  _T3 = ADD _T0, _T1  # int temp = 1
  _T4 = ADD _T0, _T2  # int i = 2
  _T5 = 5
_L1:
  _T6 = LT _T4, _T5   # i < 5
  BEQZ _T6, _L3
_L2:                  # loop label
  _T3 = MUL _T3, _T4  # temp = temp * i
  _T4 = ADD _T4, _T1  # i = i + 1
  JUMP _L1
_L3:                  # break label
  return _T3
```

在这个程序中可以看到 ```_T3, _T4``` 这两个临时寄存器可能在使用前被赋值多次，这就不是 SSA 形式了，可以使用 ```PHI``` 指令规避这种情况。```PHI``` 指令可以根据进入当前块的不同块（也就是上一个块对应的 ```Label```），选择不同的值。

```
<result> = PHI [<val0>, <label0>], [<val1>, <label1>] ...
```

因此可以改写为如下形式：

```
_L0:
  _T0 = 2
  _T1 = 1
_L1:
  _T2 = PHI [_T0, _L0], [_T6, _L2]  # int i = 2
  _T3 = PHI [_T1, _L0], [_T7, _L2]  # int temp = 1
  _T4 = 5
  _T5 = LT T2, _T4                  # i < 5
  BEQZ _T5, _L3
_L2:                                # loop label
  _T7 = MUL _T3, _T2                # temp = temp * i
  _T6 = ADD _T2, _T1                # i = i + 1
  JUMP _L1
_L3:                                # break label
  return _T7
```

在这段代码中，每个临时寄存器在使用之前只被赋值一次，因此满足 SSA 形式。

#### Plan2 - Alloca & Load & Store

```Alloca``` 指令用于在栈上分配内存，```Load``` 指令用于从内存中读取数据，```Store``` 指令用于将数据写入内存。

这种方式通过显示地操作内存满足了 SSA 的要求，但频繁的内存读写会导致性能下降，因此需要进行优化。

#### Plan3 - MEM2REG

```mem2reg``` 就是将上述两种方案进行结合的方法。```mem2reg``` 会将 ```Alloca``` 指令转换为 ```Load``` 指令，将 ```Store``` 指令转换为 ```Store``` 指令，但是会在转换的过程中进行优化，将不必要的内存读写消除。

##### 工作流程

* ```AST -> ALLOCA & LOAD & STORE ```
* ```ALLOCA & LOAD & STORE - MEM2REG -> Target SSA```

##### 实现方式

```mem2reg``` 的基本思想是，如果一个内存位置只被赋值一次，那么就可以将其转换为一个临时寄存器，这样就可以消除内存读写。

```mem2reg``` 的算法如下：

1. 对于每个函数，找到所有的 ```Alloca``` 指令，将其转换为 ```Load``` 指令，将其对应的变量加入 ```Var``` 列表中。
2. 对于每个函数，找到所有的 ```Store``` 指令，将其转换为 ```Store``` 指令，将其对应的变量加入 ```Var``` 列表中。
3. 对于每个函数，找到所有的 ```Load``` 指令，将其对应的变量加入 ```Var``` 列表中。
4. 对于每个函数，对 ```Var``` 列表中的每个变量，如果其只被赋值一次，那么就将其转换为一个临时寄存器。
