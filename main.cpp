#include "minilog.h"

void func(int n); // b.h

int main() {
    // minilog::set_log_level(minilog::log_level::debug);
    func(42);
    minilog::log_info("world");
    minilog::log_warn("world");
    return 0;
}
