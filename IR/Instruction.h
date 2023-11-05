#ifndef IR_INSTRUCTION_H
#define IR_INSTRUCTION_H

#include "Temp.h"
#include "Value.h"
#include "BasicBlock.h"

enum IRInstrKind {
    IRInstr_LABEL,
    IRInstr_SEQ,
    IRInstr_JMP,
    IRInstr_JMP_COND,
    IRInstr_CALL,
    IRInstr_RET,
};

/// @brief the common base class for instructions
class Instruction : public Value {
public:
    explicit Instruction() = default;
    Instruction(IRInstrKind instrkind, const std::vector<TempMeta*> & dsts, const std::vector<TempMeta*> & srcs) : 
        Value(IRValueType::Value_Instruction), instrkind_(instrkind), dsts_(dsts), srcs_(srcs) {}
    virtual std::string to_str() = 0;
    inline void set_parent(BasicBlock* parent) { parent_ = parent; }
    inline BasicBlock* get_parent() const { return parent_; }
    inline IRInstrKind get_instr_kind() const { return instrkind_; }
    inline int get_dst_size() const { return dsts_.size(); }
    inline int get_src_size() const { return srcs_.size(); }
    inline TempMeta* get_dst(int i) const { return dsts_[i]; }
    inline TempMeta* get_src(int i) const { return srcs_[i]; }
protected:
    BasicBlock* parent_;
    IRInstrKind instrkind_;
    std::vector<TempMeta*> dsts_;
    std::vector<TempMeta*> srcs_;
};

class Assign : public Instruction {
public:
    explicit Assign() = default;
    Assign(TempMeta* dst, TempMeta* src) : 
        Instruction(IRInstrKind::IRInstr_SEQ, std::vector<TempMeta*>{dst}, std::vector<TempMeta*>{src}), dst_(dst), src_(src) {}
    inline std::string to_str() { return dst_->to_str() + " = " + src_->to_str(); }
    inline TempMeta* getdst() const { return dst_; }
    inline TempMeta* getsrc() const { return src_; }
protected:
    TempMeta* dst_;
    TempMeta* src_;
};

class LoadImm4 : public Instruction {
public:
    explicit LoadImm4() = default;
    LoadImm4(TempMeta* dst, int imm) : 
        Instruction(IRInstrKind::IRInstr_SEQ, std::vector<TempMeta*>{dst}, std::vector<TempMeta*>{}), dst_(dst), imm_(imm) {}
    inline std::string to_str() { return dst_->to_str() + " = " + std::to_string(imm_); }
    inline TempMeta* getdst() const { return dst_; }
    inline int getimm() const { return imm_; }
protected:
    TempMeta* dst_;
    int imm_;
};

class Unary : public Instruction {
public:
    enum IRInstrUnary {
        IR_Instr_NEG,
        IR_Instr_BITNOT,
        IR_Instr_LOGICNOT
    };
    explicit Unary() = default;
    Unary(IRInstrUnary type, TempMeta* dst, TempMeta* src) : 
        Instruction(IRInstrKind::IRInstr_SEQ, std::vector<TempMeta*>{dst}, std::vector<TempMeta*>{src}), type_(type), dst_(dst), src_(src) {}
    inline std::string to_str() { 
        if (type_ == IR_Instr_NEG) return dst_->to_str() + " = -" + src_->to_str();
        if (type_ == IR_Instr_BITNOT) return dst_->to_str() + " = ~" + src_->to_str();
        if (type_ == IR_Instr_LOGICNOT) return dst_->to_str() + " = !" + src_->to_str();
    }
    inline TempMeta* getdst() const { return dst_; }
    inline TempMeta* getsrc() const { return src_; }
protected:
    IRInstrUnary type_;
    TempMeta* dst_;
    TempMeta* src_;
};

class Binary : public Instruction {
public:
    enum IRInstrBinary {
        // binay
        IR_Instr_AND,
        IR_Instr_OR,
        IR_Instr_XOR,
        // binary caculation
        IR_Instr_ADD,
        IR_Instr_SUB,
        IR_Instr_MUL,
        IR_Instr_DIV,
        IR_Instr_MOD,
        // compare
        IR_Instr_EQU,
        IR_Instr_NEQ,
        IR_Instr_SLT,
        IR_Instr_LEQ,
        IR_Instr_SGT,
        IR_Instr_GEQ
    };
    explicit Binary() = default;
    Binary(IRInstrBinary type, TempMeta* dst, TempMeta* lhs, TempMeta* rhs) : 
        Instruction(IRInstrKind::IRInstr_SEQ, std::vector<TempMeta*>{dst}, std::vector<TempMeta*>{lhs, rhs}), type_(type), dst_(dst), lhs_(lhs), rhs_(rhs) {}
    inline std::string to_str() { 
        if (type_ == IR_Instr_AND) return dst_->to_str() + " = " + lhs_->to_str() + " & " + rhs_->to_str();
        if (type_ == IR_Instr_OR ) return dst_->to_str() + " = " + lhs_->to_str() + " | " + rhs_->to_str();
        if (type_ == IR_Instr_XOR) return dst_->to_str() + " = " + lhs_->to_str() + " ^ " + rhs_->to_str();

        if (type_ == IR_Instr_ADD) return dst_->to_str() + " = " + lhs_->to_str() + " + " + rhs_->to_str();
        if (type_ == IR_Instr_SUB) return dst_->to_str() + " = " + lhs_->to_str() + " - " + rhs_->to_str();
        if (type_ == IR_Instr_MUL) return dst_->to_str() + " = " + lhs_->to_str() + " * " + rhs_->to_str();
        if (type_ == IR_Instr_DIV) return dst_->to_str() + " = " + lhs_->to_str() + " / " + rhs_->to_str();
        if (type_ == IR_Instr_MOD) return dst_->to_str() + " = " + lhs_->to_str() + " % " + rhs_->to_str();
        
        if (type_ == IR_Instr_EQU) return dst_->to_str() + " = " + lhs_->to_str() + " == " + rhs_->to_str();
        if (type_ == IR_Instr_NEQ) return dst_->to_str() + " = " + lhs_->to_str() + " != " + rhs_->to_str();
        if (type_ == IR_Instr_SLT) return dst_->to_str() + " = " + lhs_->to_str() + " < " + rhs_->to_str();
        if (type_ == IR_Instr_LEQ) return dst_->to_str() + " = " + lhs_->to_str() + " <= " + rhs_->to_str();
        if (type_ == IR_Instr_SGT) return dst_->to_str() + " = " + lhs_->to_str() + " > " + rhs_->to_str();
        if (type_ == IR_Instr_GEQ) return dst_->to_str() + " = " + lhs_->to_str() + " >= " + rhs_->to_str();
    }
    inline TempMeta* getdst() const { return dst_; }
    inline TempMeta* getlhs() const { return lhs_; }
    inline TempMeta* getrhs() const { return rhs_; }
protected:
    IRInstrBinary type_;
    TempMeta* dst_;
    TempMeta* lhs_;
    TempMeta* rhs_;
};

class Call : public Instruction {
public:
    explicit Call() = default;
    Call(TempMeta* dst, const std::vector<TempMeta*> & srcs, Label* func) : 
        Instruction(IRInstrKind::IRInstr_CALL, std::vector<TempMeta*>{dst}, srcs), dst_(dst), func_(func) {}
    inline TempMeta* getdst() const { return dst_; }
    inline std::string to_str() { 
        std::string ret = dst_->to_str() + " = call " + func_->to_str() + "(";
        for (int i = 0; i < srcs_.size(); ++i) {
            ret += srcs_[i]->to_str();
            if (i != srcs_.size() - 1) ret += ", ";
        }
        ret += ")";
        return ret;
    }
protected:
    TempMeta* dst_;
    Label* func_;
};

class Label : public Instruction {
public:
    explicit Label() = default;
    Label(const std::string & label) : 
        Instruction(IRInstrKind::IRInstr_LABEL, std::vector<TempMeta*>{}, std::vector<TempMeta*>{}), label_(label) {}
    inline std::string to_str() { return label_ + ":"; }
protected:
    std::string label_;
};

class Branch : public Instruction {
public:
    explicit Branch() = default;
    Branch(Label* label) : 
        Instruction(IRInstrKind::IRInstr_JMP, std::vector<TempMeta*>{}, std::vector<TempMeta*>{}), label_(label) {}
    inline std::string to_str() { return "jump " + label_->to_str();  }
protected:
    Label* label_;
};

class CondBranch : public Instruction {
public:
    enum IRInstrCondBranch {
        IR_Instr_BEQ,
        IR_Instr_BNE
    };
    explicit CondBranch() = default;
    CondBranch(IRInstrCondBranch type, Label* label, TempMeta* cond) : 
        Instruction(IRInstrKind::IRInstr_JMP_COND, std::vector<TempMeta*>{}, std::vector<TempMeta*>{cond}), type_(type), label_(label), cond_(cond) {}
    inline std::string to_str() { return "if " + cond_->to_str() + " " + (type_ == IR_Instr_BEQ ? "==" : "!=") + " 0 jump " + label_->to_str(); }
    inline TempMeta* getcond() const { return cond_; }
protected:
    IRInstrCondBranch type_;
    Label* label_;
    TempMeta* cond_;
};

class Return : public Instruction {
public:
    explicit Return() = default;
    Return(TempMeta* value) : 
        Instruction(IRInstrKind::IRInstr_RET, std::vector<TempMeta*>{}, std::vector<TempMeta*>{value}) {}
    inline std::string to_str() { return "return " + value_->to_str(); }
    inline TempMeta* getvalue() const { return value_; }
protected:
    TempMeta* value_;
};

class Alloca : public Instruction {
public:
    explicit Alloca() = default;
    Alloca(TempMeta* addr) : 
        Instruction(IRInstrKind::IRInstr_SEQ, std::vector<TempMeta*>{addr}, std::vector<TempMeta*>{}), addr_(addr) {}
    inline std::string to_str() { return "*" + addr_->to_str() + " = alloca"; }
protected:
    TempMeta* addr_;
};

class Store : public Instruction {
public:
    explicit Store() = default;
    Store(TempMeta* addr, TempMeta* src) : 
        Instruction(IRInstrKind::IRInstr_SEQ, std::vector<TempMeta*>{addr}, std::vector<TempMeta*>{src}), src_(src), addr_(addr) {}
    inline std::string to_str() { return "*" + addr_->to_str() + " = " + src_->to_str(); }
protected:
    TempMeta* src_;
    TempMeta* addr_;
};

class Load : public Instruction {
public:
    explicit Load() = default;
    Load(TempMeta* dst, TempMeta* addr) : 
        Instruction(IRInstrKind::IRInstr_SEQ, std::vector<TempMeta*>{dst}, std::vector<TempMeta*>{addr}), dst_(dst), addr_(addr) {}
    inline std::string to_str() { return dst_->to_str() + " = *" + addr_->to_str(); }
protected:
    TempMeta* dst_;
    TempMeta* addr_;
};

class Phi : public Instruction {
public:
    explicit Phi() = default;
    Phi(TempMeta* dst, const std::vector<TempMeta*> & values, const std::vector<Label*> & labels) : 
        Instruction(IRInstrKind::IRInstr_SEQ, std::vector<TempMeta*>{dst}, values), dst_(dst), values_(values), labels_(labels) {}
    inline std::string to_str() { 
        std::string ret = dst_->to_str() + " = phi ";
        for (int i = 0; i < values_.size(); ++i) {
            ret += "[" + values_[i]->to_str() + ", " + labels_[i]->to_str() + "]";
            if (i != values_.size() - 1) ret += ", ";
        }
        return ret;
    }
    inline int getsize() const { return values_.size(); }
    inline TempMeta* getdst() const { return dst_; }
    inline TempMeta* getvalue(int i) const { return values_[i]; }
    inline Label* getlabel(int i) const { return labels_[i]; }
protected:
    TempMeta* dst_;
    std::vector<TempMeta*> values_;
    std::vector<Label*> labels_;
};

#endif // IR_INSTRUCTION_H