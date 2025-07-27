
#include "io/Logger.h"
#include <iostream>

void Logger::print(const char *msg) {
    std::cout << "[NEURAL_NET] " << msg << std::endl;
}
