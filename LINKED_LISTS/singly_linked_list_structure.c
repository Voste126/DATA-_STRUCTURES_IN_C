#include <stdio.h>
#include <stdlib.h>

struct Node {
    // Data part of the node
    int data;

    // Pointer to the next node in the list
    struct Node* next;
};

// Function to create a new node with given data
struct Node* newNode(int data) {
    struct Node* node = 
      (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}