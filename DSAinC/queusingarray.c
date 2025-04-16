#include <stdio.h>
#define SIZE 5  // Define the maximum size of the queue

int queue[SIZE]={10,20,30,40,50}, front = 0, rear =SIZE-1;

// Function to check if the queue is empty    
int isEmpty() {
    return front == -1;
}

// Function to check if the queue is full
int isFull() {
    return rear == SIZE - 1;
}


// Function to display the queue elements
void display() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

// Function to get the front element
int peek() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return -1;
    }
    return queue[front];
}

int main() {

    display();
    printf("Front element: %d\n", peek());
   printf("%d", isEmpty());
   printf("\n%d", isFull());
    return 0;
}
