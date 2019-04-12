#include "lib.h"

/* #include <spdlog/spdlog.h> */
#include <iostream>

int main()
{
    /* auto logger = spdlog::stdout_logger_mt("console"); */
    /* logger->info("version {} was started", version()); */
    std::cout << "version " << version() << " was started" << std::endl;

    return 0;
}
