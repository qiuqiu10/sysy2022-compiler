#ifndef IR_MODULE_H
#define IR_MODULE_H

#include "Function.h"
#include "Data.h"
#include <assert.h>

/// @brief functions, global variables and a symboltable
class Module {
public:
    explicit Module() = default;
    Module(const std::vector<Function*> & functions, const std::vector<DataMeta*> global_variables) : 
        functions_(functions), global_variables_(global_variables) {
            if (!check_global_variables()) {
                printf("global variables are not global.\n");
                assert(false);
            }
        }
    inline const std::vector<Function*> * get_functions() const { return &functions_; }
    inline const std::vector<DataMeta*> * get_global_variables() const { return &global_variables_; }
    bool check_global_variables() {
        for (auto global_variable : global_variables_) {
            if (!global_variable->get_is_global()) {
                return false;
            }
        }
        return true;
    }
protected:
    std::vector<Function*> functions_;
    std::vector<DataMeta*> global_variables_;
};

#endif // IR_MODULE_H