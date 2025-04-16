#include <stdio.h>
#include <stdlib.h>

// Structure for a stack node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to push an element onto the stack
void push(Node** top, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = *top;
    *top = newNode;
}

// Function to pop an element from the stack
void pop(Node** top) {
    if (*top == NULL) {
        printf("Stack Underflow!\n");
        return;
    }
    Node* temp = *top;
    *top = (*top)->next;
    free(temp);
}

// Function to display the stack
void display(Node* top) {
    printf("Stack: ");
    while (top) {
        printf("%d -> ", top->data);
        top = top->next;
    }
    printf("NULL\n");
}

// Driver code
int main() {
    Node* top = NULL;

    push(&top, 10);
    push(&top, 20);
    push(&top, 30);

    printf("After Push Operations:\n");
    display(top);

    pop(&top);
    printf("After Pop Operation:\n");
    display(top);

    return 0;
}