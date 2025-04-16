#include <stdio.h>
#define SIZE 5  // Define the maximum size of the queue

int queue[SIZE],front = -1, rear = -1;

// Function to check if the queue is empty
int isEmpty()
{
    return front == -1;
}
// Function to check if the queue is full
int isFull()
 {
    return rear == SIZE - 1;
}
// Function to enqueue (insert) an element  
void enqueue(int value)
 {

    if (isFull())
    {
        printf("Queue is full!\n");
        return;
    }
    else if (front == -1) front = 0; // Set front to 0 if inserting the first element
    queue[++rear] = value;
    printf("%d enqueued.\n", value);
}

// Function to dequeue (remove) an element
void dequeue() 
{
    if (isEmpty()) 
    {
        printf("Queue is empty!\n");
        return;
    }
    printf("%d dequeued.\n", queue[front]);
    front++;
    if (front > rear) front = rear = -1; // Reset queue when empty
}

// Function to display the queue elements
void display()
 {
    if (isEmpty())
     {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue: ");
    for (int i = front; i <= rear; i++) 
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

// Function to get the front element
int peek()
 {
    if (isEmpty())
    {
        printf("Queue is empty!\n");
        return -1;
    }
    return queue[front];
}

int main()
 {
    enqueue(45);
    enqueue(67);
    enqueue(88);
    dequeue();
    display();

    printf("Front element: %d\n", peek());

    return 0;
}
