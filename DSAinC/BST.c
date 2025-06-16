#include <stdio.h>
#include <stdlib.h>

// Define the structure for a tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node into the BST
struct Node* insert(struct Node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }
    return root;
}

// Function to perform in-order traversal
void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}
//Pre order
void preorderTraversal(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        inorderTraversal(root->left);
        inorderTraversal(root->right);
    }
}
//Post order
void postorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        inorderTraversal(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    struct Node* root = NULL;

    // Insert some nodes into the BST
    root = insert(root, 10);
    insert(root, 5);
    insert(root, 20);
    insert(root, 3);
    insert(root, 7);

    
    printf("In-order traversal of the BST: ");
    inorderTraversal(root);
    printf("\n-----------------------------------------------\n");
    printf("Pre-order traversal of the BST: ");
    preorderTraversal(root);
    printf("\n-----------------------------------------------\n");
    printf("Post-order traversal of the BST: ");
    postorderTraversal(root);
    return 0;
}