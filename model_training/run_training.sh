#!/bin/bash
echo "Starting neural network training..."
if [ ! -f "build/neural_trainer" ]; then
    echo "Error: neural_trainer executable not found!"
    exit 1
fi
./build/neural_trainer > training_log.txt 2>&1 &
python3 train_mnist.py
echo "Training process completed."
