#pragma once

#include <string>

namespace rcrl
{
enum Mode
{
    GLOBAL,
    VARS,
    ONCE
};

void        cleanup_plugins();
bool        submit_code(std::string code, Mode mode);
std::string get_new_compiler_output();
bool        is_compiling();
bool        try_get_exit_status_from_compile(int& exitcode);
std::string copy_and_load_new_plugin(bool redirect_stdout = false);
} // namespace rcrl