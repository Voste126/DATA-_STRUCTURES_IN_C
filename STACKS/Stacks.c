#include <stdio.h>
#define MAX 100  // Maximum size of the stack

// Define the stack structure
typedef struct {
    int arr[MAX];  // Array to hold stack elements
    int top;       // Index of the top element
} Stack;

// Initialize the stack
void initStack(Stack *stack) {
    stack->top = -1; // Set the stack as empty
}

// Check if the stack is empty
int isEmpty(Stack *stack) {
    return stack->top == -1;
}

// Check if the stack is full
int isFull(Stack *stack) {
    return stack->top == MAX - 1;
}

// Push an element onto the stack
void push(Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }
    stack->arr[++stack->top] = value;
    printf("Pushed %d onto the stack\n", value);
}

// Pop an element from the stack
int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow! Cannot pop\n");
        return -1; // Return an invalid value to indicate error
    }
    return stack->arr[stack->top--];
}

// Peek at the top element of the stack
int peek(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return -1; // Return an invalid value to indicate error
    }
    return stack->arr[stack->top];
}

int main() {
    Stack stack;
    initStack(&stack);

    // Perform some operations
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Top element is: %d\n", peek(&stack));

    printf("Popped: %d\n", pop(&stack));
    printf("Popped: %d\n", pop(&stack));

    if (isEmpty(&stack)) {
        printf("Stack is now empty\n");
    }

    return 0;
}
