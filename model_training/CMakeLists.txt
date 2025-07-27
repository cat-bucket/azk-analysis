cmake_minimum_required(VERSION 3.10)
project(neural_training)

set(CMAKE_CXX_STANDARD 11)

add_executable(neural_trainer
    src/main.cpp
    src/core/Platform.cpp
    src/io/Logger.cpp
)

target_link_libraries(neural_trainer uv ssl crypto)
