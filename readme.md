# Learning C++ via Neural Network Implementation

A collection of neural network architectures implemented from scratch in C++ for learning purposes.

## Implemented Models

### 1. Multilayer Perceptron (MLP)
- Custom implementation without external ML libraries
- Features:
  - Flexible network topology with configurable layer sizes
  - Multiple activation functions (ReLU, Sigmoid, Softmax)
  - Advanced optimisers (SGD, SGD+Momentum, NAG, Adam, AdamW)
  - Cross-entropy and MSE loss functions
  - Multi-threaded training for improved performance
  - Model serialisation (save/load functionality)
  - Training metrics logging and visualisation
  - Evaluation metrics (accuracy, precision, recall, F1 score)

### 2. Gated Recurrent Unit (GRU)
- Custom implementation for sequence processing
- Features:
  - Configurable input, hidden, and output dimensions
  - Advanced optimisers (Adam, AdamW)
  - Financial metrics for stock prediction (profit/loss, directional accuracy)
  - Position sizing based on prediction confidence
  - Batch processing capabilities
  - Customisable sequence length

### 3. Convolutional Neural Network (CNN)
- Work in progress implementation
- Features:
  - Convolutional layers with configurable kernels
  - Pooling layers (Max, Average)
  - Dense layers for classification
  - Same padding mode support
  - Tensor3D class for efficient 3D data handling

## Project Structure

```text
project/
├── MLP/
│   ├── nn.cpp            # MLP implementation
│   └── mnist_data/       # MNIST dataset for testing
├── GRU/
│   ├── gru.cpp          # Basic GRU implementation
│   ├── gru+mlp.cpp      # GRU with MLP output layer
│   └── stock_data/      # Financial data for testing
└── CNN/
    └── cnn.cpp          # CNN implementation
```

## Todo
1. Optimisations
   - SIMD instructions for matrix operations
   - Chunked matrix evaluation
   - Full batch matrix training

2. Model Improvements
   - Dropout regularisation
   - Batch normalisation
   - Gradient clipping
   - Additional loss functions
   - Variable strides in CNN
   - Additional padding modes in CNN

3. Infrastructure
   - Unified model interface
   - Improved data loading pipeline
   - Better test coverage
   - Documentation generation

## Learning Outcomes
- See `learnings.md` for detailed C++ insights gained during implementation.
- Understanding of NN architectures, how they work, and how to train them.

## Requirements
- C++ compiler with C++17 support
- Standard Template Library (STL)


