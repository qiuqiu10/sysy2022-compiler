#ifndef IR_BASICBLOCK_H
#define IR_BASICBLOCK_H

#include "Value.h"
#include "Instruction.h"
#include "Function.h"

/// @brief a single entry single exit section of the code
class BasicBlock : public Value {
public:
    explicit BasicBlock() = default;
    BasicBlock(Function* parent, const std::vector<Instruction*> &instructions, const std::string & name) : 
        Value(IRValueType::Value_BasicBlock, name), parent_(parent), instructions_(instructions) {}
    inline const std::vector<Instruction*>* get_instructions() const { return &instructions_; }
protected:
    Function* parent_;
    std::vector<Instruction*> instructions_;
    std::vector<TempMeta*> live_in;
    std::vector<TempMeta*> live_out;
    std::vector<TempMeta*> live_use;
};

#endif // IR_BASICBLOCK_H