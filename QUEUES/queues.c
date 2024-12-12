#include <stdio.h>
#include <stdlib.h>
#define MAX 100  // Maximum size of the queue

// Define the queue structure
typedef struct {
    int arr[MAX];  // Array to hold queue elements
    int front;     // Index of the front element
    int rear;      // Index of the rear element
} Queue;

// Initialize the queue
void initQueue(Queue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

// Check if the queue is empty
int isEmpty(Queue *queue) {
    return queue->front == -1;
}

// Check if the queue is full
int isFull(Queue *queue) {
    return (queue->rear + 1) % MAX == queue->front;
}

// Enqueue an element into the queue
void enqueue(Queue *queue, int value) {
    if (isFull(queue)) {
        printf("Queue Overflow! Cannot enqueue %d\n", value);
        return;
    }
    if (isEmpty(queue)) {
        queue->front = 0;
    }
    queue->rear = (queue->rear + 1) % MAX;
    queue->arr[queue->rear] = value;
    printf("Enqueued %d into the queue\n", value);
}

// Dequeue an element from the queue
int dequeue(Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue Underflow! Cannot dequeue\n");
        return -1; // Return an invalid value to indicate error
    }
    int value = queue->arr[queue->front];
    if (queue->front == queue->rear) {
        // Queue is now empty
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % MAX;
    }
    return value;
}

// Peek at the front element of the queue
int peek(Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty!\n");
        return -1; // Return an invalid value to indicate error
    }
    return queue->arr[queue->front];
}

int main() {
    Queue queue;
    initQueue(&queue);

    // Perform some operations
    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    printf("Front element is: %d\n", peek(&queue));

    printf("Dequeued: %d\n", dequeue(&queue));
    printf("Dequeued: %d\n", dequeue(&queue));

    if (isEmpty(&queue)) {
        printf("Queue is now empty\n");
    }

    return 0;
}