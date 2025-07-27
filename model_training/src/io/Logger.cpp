
#include "io/Logger.h"
#include <iostream>
#include <fstream>
#include <ctime>

void Logger::print(const char *msg) {
    std::ofstream log("training_log.txt", std::ios::app);
    std::time_t now = std::time(nullptr);
    log << "[NEURAL_NET " << std::ctime(&now) << "] " << msg << std::endl;
    log.close();
}
