// Define the Node structure
#include <stdio.h>
struct Node {
    int data; 
    struct Node* next; 
    struct Node* prev; 
};

struct Node* createNode(int data) {
    struct Node* newNode = 
      (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}