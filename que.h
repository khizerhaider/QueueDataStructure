#ifndef QUE_H
#define QUE_H

// Define a constant for the maximum size of the queue.
static const int maxsize = 5; // Maximum size of the queue

// Define the Que class for implementing a queue data structure.
class Que {
public:
    // Constructor to initialize the queue with a given size.
    Que(int size);
    
    // Destructor to clean up dynamically allocated memory.
    ~Que();
    
    // Method to add an element to the queue.
    bool enque(int x);
    
    // Method to get the current size of the queue (number of elements).
    int size_of_que();
    
    // Method to remove and return the front element of the queue.
    int deque();
    
    // Method to get the status of the queue (full, empty, or available).
    const char* que_status();
    
    // Method to clear the queue (reset all elements).
    bool clear();
    
    // Method to retrieve the first element in the queue without removing it.
    int firstElement();
    
    // Method to provide a UI for interacting with the queue data structure.
    void menu();

private:
    // Pointer to a dynamically allocated array for storing queue elements.
    int* patient_id; 
    
    // Variable to keep track of the current number of elements in the queue.
    int size_que;    
    
    // Index of the front of the queue (where elements are dequeued).
    int front;       
    
    // Index of the tail of the queue (where elements are enqueued).
    int tail;        
};

#endif // QUE_H
