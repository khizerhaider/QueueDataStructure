# Queue Data Structure Implementation

This repository contains an implementation of a Queue data structure in C++. The queue follows the FIFO (First-In-First-Out) principle, where elements are added to the back (tail) and removed from the front.

## Features

- **Dynamic Size**: The queue is initialized with a maximum size and can handle elements until that limit is reached.
- **Circular Queue**: Utilizes a circular array to optimize space, allowing efficient usage of the array.
- **User Interface**: Provides a simple command-line interface for interacting with the queue, including options to enqueue, dequeue, check status, clear the queue, and get the first element.

## Getting Started

### Prerequisites

- A C++ compiler (e.g., g++, clang++).
- Basic understanding of C++ programming.

### Installation

1. Clone this repository:
   ```bash
   git clone gh repo clone khizerhaider/QueueDataStructure
   git clone https://github.com/khizerhaider/QueueDataStructure.git
   cd path to the directory
2.Compile the source files:
   ```bash
   g++ main.cpp que.cpp -o queue_program
   ```

3.Run the program:
   ```bash
   ./queue_program
   ```
Usage

When you run the program, you will be presented with a menu of options:

    Enqueue (Add Element)
    Dequeue (Remove Element)
    Check Queue Status
    Clear Queue
    Get First Element
    Get Size of Queue
    Exit

Simply enter the corresponding number for the operation you wish to perform.
Advantages of Circular Queue over Traditional Queue Implementation

    Space Efficiency: In a traditional queue implementation using an array, once elements are dequeued, the front of the queue moves forward. This can lead to wasted space as the unused elements cannot be reused. Circular queues efficiently wrap around to utilize free spaces, thus minimizing wasted memory.

    Constant Time Complexity: Both enqueue and dequeue operations in a circular queue operate in O(1) time complexity, as they only involve simple pointer arithmetic without the need for shifting elements. In contrast, traditional array-based queues require shifting elements when dequeuing, resulting in O(n) time complexity for that operation.

    Better Performance: The circular queue provides better performance in scenarios where the queue frequently reaches full capacity and elements are continuously added and removed. It minimizes the overhead of array resizing and element shifting.

    Simplicity of Implementation: The circular queue's design simplifies the implementation of the queue operations, making it easier to manage the indices of the front and tail without additional complexity.

Contributing

Contributions are welcome! Please feel free to submit a pull request or create an issue for any bugs or feature requests.
License

## License

This project is licensed under the [MIT License](LICENSE) - see the LICENSE file for details.


### Highlights in the README:
- **Overview**: Explains what the repository is about and its purpose.
- **Features**: Lists the key features of your queue implementation.
- **Installation and Usage**: Provides clear instructions for compiling and using the program.
- **Advantages**: Highlights the benefits of the circular queue approach compared to traditional implementations, making it clear why someone might prefer this version.

Feel free to customize any part of the README to better fit your project or personal style!

