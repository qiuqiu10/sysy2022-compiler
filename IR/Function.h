#ifndef IR_FUNCTION_H
#define IR_FUNCTION_H

#include "Data.h"
#include "Value.h"
#include "BasicBlock.h"
#include "Module.h"
#include <vector>

/// @brief a single procedure in the program
class Function : public Value {
public:
    explicit Function() = default;
    Function(Module *parent, VarType ret_type, const std::vector<DataMeta*> &arguments, const std::string & name) : 
        Value(IRValueType::Value_Function, name), ret_type_(ret_type), parent_(parent), arguments_(arguments) {}
    inline bool is_main() { return name_ == "main"; }
    inline VarType get_ret_type() const { return ret_type_; }
    inline Module * get_parent() const { return parent_; }
    inline int get_arg_num() const { return arguments_.size(); }
    inline const std::vector<DataMeta*>* get_arguments() const { return &arguments_; }
    inline const std::vector<BasicBlock*>* get_basic_blocks() const { return &basic_blocks_; }
protected:
    VarType ret_type_;
    Module *parent_;
    std::vector<DataMeta*> arguments_;
    std::vector<BasicBlock*> basic_blocks_;
    std::vector<Instruction*> instructions_;
};

#endif // IR_FUNCTION_H