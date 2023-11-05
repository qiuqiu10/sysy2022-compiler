#ifndef IR_DATA_H
#define IR_DATA_H

#include <string>
#include <vector>

/// @brief Valid data type : var, varptr, array, arrayptr
enum DataType {
    Var,
    VarPtr,
    Array,
    ArrayPtr
};

/// @brief variable type
enum VarType {
    Int,
    Float,
    Double,
    Char,
    Bool,
    Void
};

/// @brief meta for data
class DataMeta {
public:
    explicit DataMeta() = default;
    DataMeta(DataType data_type, VarType var_type, bool is_global, bool is_constant, const std::string & name = "") : 
        data_type_(data_type), var_type_(var_type), is_global_(is_global), is_constant_(is_constant), name_(name) {}
    inline std::string to_str() { return "none to_str method for Data(" + name_ + ")"; }
    inline DataType get_data_type() const { return data_type_; }
    inline VarType get_var_type() const { return var_type_; }
    inline bool get_is_global() const { return is_global_; }
    inline bool get_is_constant() const { return is_constant_; }
    inline std::string get_name() const { return name_; }
protected:
    DataType data_type_;
    VarType var_type_;
    bool is_global_;
    bool is_constant_;
    std::string name_;
};

/// @brief variable
class DataVar : public DataMeta {
public:
    explicit DataVar() = default;
    DataVar(VarType var_type, bool is_global, bool is_constant, const std::string & name = "") : 
        DataMeta(DataType::Var, var_type, is_global, is_constant, name) {}
    inline std::string to_str() { return name_; }
};

// array
class DataArray : public DataMeta {
public:
    explicit DataArray() = default;
    DataArray(VarType var_type, bool is_global, bool is_constant, const std::vector<int> & dims, const std::string & name = "") : 
        DataMeta(DataType::Array, var_type, is_global, is_constant, name), dims_(dims) {}
    inline std::string to_str() {
        std::string ret = name_;
        for (auto dim : dims_) {
            ret += "[" + std::to_string(dim) + "]";
        }
        return ret;
    }
    const std::vector<int> * get_dims() const { return &dims_; }
protected:
    std::vector<int> dims_;
};

#endif // IR_DATA_H