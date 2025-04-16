#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node {
    int data;
    struct Node *prev, *next;
} Node;

// Function to display elements of doubly linked list
void display(Node* head) {
    printf("Doubly Linked List: ");
    while (head) {
        printf("%d <-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Driver code
int main() {
    // Creating nodes manually
    Node* head = (Node*)malloc(sizeof(Node));
    Node* second = (Node*)malloc(sizeof(Node));
    Node* third = (Node*)malloc(sizeof(Node));

    // Assigning data and linking nodes
    head->data = 10;  head->prev = NULL;  head->next = second;
    second->data = 20; second->prev = head; second->next = third;
    third->data = 30; third->prev = second; third->next = NULL;

    // Displaying the list
    display(head);

    return 0;
}
