#include "minilog.h"

int main() {
    minilog::log_info("hello, the answer is {}", 42);
    minilog::log_critical("this is right-aligned [{:>+10.04f}]", 3.14);

    minilog::log_warn("good job, {1:.5s} for making {0}", "minilog", "archibate");
    minilog::set_log_level(minilog::log_level::trace); // default log level is info

    int my_variable = 42;
    MINILOG_P(my_variable); // shown when log level lower than debug

    minilog::log_trace("below is the color show :)");
#define _FUNCTION(name) minilog::log_##name(#name);
    MINILOG_FOREACH_LOG_LEVEL(_FUNCTION)
#undef _FUNCTION

    return 0;
}
