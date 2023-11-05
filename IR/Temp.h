#ifndef IR_TEMP_H
#define IR_TEMP_H

#include "Data.h"

/// @brief Basic class for temperary register
class TempMeta {
public:
    explicit TempMeta() = default;
    TempMeta(int index) : index_(index) {}
    int get_index() const { return index_; }
    virtual std::string to_str() = 0;
protected:
    int index_;
};

/// @brief temp for variable
class TempVar : public TempMeta, public DataVar {
public:
    explicit TempVar() = default;
    TempVar(int index, VarType var_type) : 
        TempMeta(index), DataVar(var_type, false, false) {}
    std::string to_str() { return "_T" + std::to_string(index_); }
};

/// @brief temp for array (you are expected only using it in arguments)
class TempArray : public TempMeta, public DataArray {
public:
    explicit TempArray() = default;
    TempArray(int index, VarType var_type, const std::vector<int> & dims) : 
        TempMeta(index), DataArray(var_type, false, false, dims) {}
    std::string to_str() { return "_TA" + std::to_string(index_); }
};

/// @brief temp for single array element
class TempArrayElement : public TempMeta, public DataArray {
public:
    explicit TempArrayElement() = default;
    TempArrayElement(TempArray *parent, const std::vector<int> & dims) : 
        TempMeta(parent->get_index()), DataArray(VarType::Int, false, false, dims), parent_(parent) {}
    std::string to_str() { 
        std::string ret = parent_->to_str();
        for (auto dim : dims_) {
            ret += "[" + std::to_string(dim) + "]";
        }
        return ret;    
    }
protected:
    TempArray *parent_;
};

#endif // IR_TEMP_H