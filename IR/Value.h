#ifndef IR_VALUE_H
#define IR_VALUE_H

#include <string>

enum IRValueType {
    Value_Argument,
    Value_BasicBlock,
    Value_Constant,
    Value_Function,
    Value_GlobalVariable,
    Value_Instruction
};

/// @brief a typed value that may be used (among other things) as an operand to an instruction
class Value {
public:
    explicit Value() = default;
    Value(IRValueType type, const std::string & name = "") : type_(type), name_(name) {}
    std::string to_str() { return "none to_str method for Value(" + name_ + ")"; }
    IRValueType gettype() const { return type_; }
    std::string getname() const { return name_; }
protected:
    IRValueType type_;
    std::string name_;
};

#endif // IR_VALUE_H