#ifndef IR_USER_H
#define IR_USER_H

#include "Value.h"
#include <vector>

/// @brief the common base class of IR that may refer to Values
class User : public Value {
protected:
    std::vector<Value*> operands_;
public:
    explicit User() = default;
    User(IRValueType type, const std::vector<Value*> & operands, const std::string & name = "") : Value(type, name), operands_(operands) {}
};

#endif // IR_USER_H