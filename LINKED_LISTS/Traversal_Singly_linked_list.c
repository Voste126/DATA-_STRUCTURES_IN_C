// C program to illustrate creation
// and traversal of Singly Linked List

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* node = 
       (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void printList(struct Node* n) {
  
    // Iterate till n reaches NULL
    while (n != NULL) {
        printf("%d ", n->data);
        n = n->next;
    }
}

int main() {
  
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    //Linked List 1 -> 2 -> 3
    head = createNode(1);
    second = createNode(2);
    third = createNode(3);
  
    head->next = second;

    second->next = third;

    printList(head);

    return 0;
}