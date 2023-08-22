#include "minilog.h"

void func(int n); // b.h

int main() {
    func(42);
    minilog::log_info("the answer is {}", 42);

    minilog::set_log_level(minilog::log_level::trace);
#define _FUNCTION(name) minilog::log_##name(#name);
    MINILOG_FOREACH_LOG_LEVEL(_FUNCTION)
#undef _FUNCTION

    return 0;
}
