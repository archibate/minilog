# minilog

Mini Logging Library for C++20

> This is a single-header-only log library, simply copy the `minilog.h` to your project (C++20 required) and include it would work.

```cpp
#include "minilog.h"

int main() {
    minilog::log_info("hello, the answer is {}", 42);
    minilog::log_critical("this is right-aligned [{:>+.04f}]", 3.14);
    minilog::set_log_level(minilog::log_level::debug); // default log level is info
    minilog::log_debug();
    return 0;
}
```

> Formatting are based on C++20 `std::format`.

```bash
cmake -B build
cmake --build build
export MINILOG_LEVEL=trace  # set default log level from environment variable
build/main
```
