# ConcurrentQueue

ConcurrentQueue is a C++ library that provides a thread-safe implementation of a concurrent queue, allowing multiple threads to enqueue and dequeue elements safely.

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

In multi-threaded applications, data structures like queues need to be protected to avoid data races and ensure thread safety. The ConcurrentQueue library offers a simple and efficient way to handle concurrent access to a queue. It wraps a regular queue with a mutex to allow multiple threads to safely enqueue and dequeue elements.

## Features

- Thread-safe implementation using `std::mutex`.
- Enqueue and dequeue elements from multiple threads without data races.
- Simple and easy-to-use interface.

## Getting Started

### Prerequisites

- C++11 or later
- CMake (for building the library and examples)

### Building

Follow the steps below to build the library and examples:

1. Clone this repository to your local machine.
2. Create a build directory: `mkdir build && cd build`
3. Generate the build files: `cmake ..`
4. Build the library and examples: `cmake --build .`

### Running the Examples

After building the library, you can find the example executables in the `build/examples` directory. Run the examples to see how the ConcurrentQueue can be used in multi-threaded scenarios.

## Usage

To use the ConcurrentQueue in your project, follow the steps below:

1. Copy the `concurrent_queue.h` file into your project's source directory.
2. Include the header file in your code: `#include "concurrent_queue.h"`
3. Create an instance of the `ConcurrentQueue` class for the desired element type.
4. Use the `enqueue` and `dequeue` methods to interact with the concurrent queue.

Example usage:

```cpp
#include <iostream>
#include "concurrent_queue.h"

int main() {
    ConcurrentQueue<int> myQueue;

    // Enqueue elements from multiple threads
    myQueue.enqueue(42);
    myQueue.enqueue(99);

    // Dequeue elements from multiple threads
    int value;
    myQueue.dequeue(value)
    std::cout << "Dequeued value: " << value << std::endl;

    return 0;
}
