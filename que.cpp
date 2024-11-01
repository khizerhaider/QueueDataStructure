#include <iostream>
#include "que.h"

using namespace std;

// Constructor to initialize the queue with a given size.
Que::Que(int size) 
    : size_que(0), // Initialize the current size to 0
      patient_id(new int[maxsize]()), // Allocate memory for the queue array and initialize it to 0
      front(0), // Initialize the front index to 0
      tail(0) // Initialize the tail index to 0
{}

// Destructor to clean up dynamically allocated memory.
Que::~Que() {
    delete[] patient_id; // Deallocate memory for the patient_id array
}

// Method to add an element to the queue.
bool Que::enque(int x) {
    if (size_que == maxsize) { // Check if the queue is full
        cout << "Value cannot be Queued, the Queue is full already\n";
        return false; // Return false if the queue is full
    }

    patient_id[tail] = x; // Enqueue the new element at the tail position
    tail = (tail + 1) % maxsize; // Move tail forward, wrapping around if needed
    ++size_que; // Increase the current size of the queue
    cout << "Value Queued successfully\n";
    return true; // Return true indicating success
}

// Method to get the current size of the queue.
int Que::size_of_que() {
    cout << "The occupied space of the queue is " << size_que << endl; // Output current size
    return size_que; // Return the current size
}

// Method to remove and return the front element of the queue.
int Que::deque() {
    if (size_que == 0) { // Check if the queue is empty
        cout << "The Queue is empty, no value dequeued\n";
        return 0; // Return a special value indicating the queue is empty
    }

    int temp = patient_id[front]; // Get the value at the front of the queue
    patient_id[front] = 0; // Clear the position (optional, not strictly necessary)
    front = (front + 1) % maxsize; // Move front forward, wrapping around if needed
    --size_que; // Decrease the current size of the queue
    cout << "Value " << temp << " dequeued successfully\n";
    return temp; // Return the dequeued value
}

// Method to get the status of the queue (full, empty, or available).
const char* Que::que_status() {
    if (size_que == maxsize) {
        return "The Queue is full.\n"; // Return full status
    } else if (size_que == 0) {
        return "The Queue is empty.\n"; // Return empty status
    } else {
        return "The Queue has space available.\n"; // Return available status
    }
}

// Method to clear the queue (reset all elements).
bool Que::clear() {
    fill(patient_id, patient_id + maxsize, 0); // Clear all elements to 0
    size_que = 0; // Reset current size to 0
    front = 0; // Reset front index to 0
    tail = 0; // Reset tail index to 0
    return true; // Return true indicating success
}

// Method to retrieve the first element in the queue without removing it.
int Que::firstElement() {
    if (size_que == 0) { // Check if the queue is empty
        cout << "No value in the queue\n";
        return -1; // Return an indication of no value
    }
    cout << "The first element is " << patient_id[front] << endl; // Output the first element
    return patient_id[front]; // Return the first element
}

// Method to provide a menu for interacting with the queue data structure.
void Que::menu() {
    int choice, value; // Variables for user input

    do {
        // Display the menu options
        cout << "\nQueue Menu:";
        cout << "\n1. Enqueue (Add Element)";
        cout << "\n2. Dequeue (Remove Element)";
        cout << "\n3. Check Queue Status";
        cout << "\n4. Clear Queue";
        cout << "\n5. Get First Element";
        cout << "\n6. Get size of Que";
        cout << "\n7. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice; // Get user choice

        // Switch case to handle menu options
        switch (choice) {
            case 1: // Enqueue
                cout << "Enter value to enqueue: ";
                cin >> value; // Get the value to enqueue
                enque(value); // Call enqueue method
                break;
            case 2: // Dequeue
                deque(); // Call dequeue method
                break;
            case 3: // Check Queue Status
                cout << que_status(); // Output queue status
                break;
            case 4: // Clear Queue
                clear(); // Call clear method
                cout << "Queue cleared successfully.\n";
                break;
            case 5: // Get First Element
                firstElement(); // Call firstElement method
                break;
            case 6: // Get size of Queue
                size_of_que(); // Call size_of_que method
                break;
            case 7: // Exit
                cout << "Exiting...\n"; // Exit message
                break;
            default: // Handle invalid choice
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 7); // Continue until the user chooses to exit
}
