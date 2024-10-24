## Learning C++ via the implementation of various NNs.

### HaveDone:
- Implemented a basic multilayer perceptron from scratch (no nn libraries)
    - NeuralNetwork class (contains vector of Layer objects, training methods, and evaluation methods)
    - Layer class (containing weight & bias Matrix objects and inference methods)
    - Matrix class (containing matrix methods e.g. addition, multiplication, transpostition, hadamard...)

- Multithreaded training
- SGD, SGD+Momentum, Nesterov Accelerated Gradient, Adam, amd AdamW training methods.
- Ability to select activation functions for each layer
- Ability to save and load model to/from a binary file


### Todo:
- implement full matrix training (more than one example at a time) and consolidate current multithreaded approach.
- ~~implement a more general approach loss functions (and their derivatives for training)~~
- implement various regularisation techniques (dropout, cost func penalty for large weights)
- implement various matrix multiplication optimisations (SIMD instructions, chunked eval, etc.)
- implement various neural network architechtures (LSTMs, RNNs for financial data; CNN for some image data)
