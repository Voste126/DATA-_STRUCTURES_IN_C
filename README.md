# DATA-_STRUCTURES_IN_C

C Programming Cheat Sheet for DSA

1. Basics
Variable Declaration: int a; float b; char c;
Loops:
c
bash ```
for (int i = 0; i < n; i++) { /* code */ }
while (condition) { /* code */ }
do { /* code */ } while (condition);
Conditional Statements:
c
Copy code
if (condition) { /* code */ }
else if (another_condition) { /*code*/ }
else { /*code*/ }

```

2. Functions
Syntax:
c
Copy code
return_type function_name(parameter_list) {
    // code
    return value;
}
Recursion Example:
c
Copy code
int factorial(int n) {
    if (n == 0) return 1;
    else return n * factorial(n - 1);
}
3. Pointers
Declaration: int *ptr;
Accessing values: *ptr (dereferencing)
Array with Pointers:
c
Copy code
int arr[] = {1, 2, 3};
int *ptr = arr;
printf("%d", *(ptr+1)); // Accesses arr[1]
4. Data Structures
Array Operations:
c
Copy code
int arr[5] = {1, 2, 3, 4, 5};
arr[2] = 10; // Modifying an element
Linked List Node:
c
Copy code
struct Node {
    int data;
    struct Node* next;
};
5. Stack and Queue (using Arrays)
Stack Operations:
c
Copy code
int stack[MAX];
int top = -1;
void push(int value) {
    if (top < MAX - 1) stack[++top] = value;
}
int pop() {
    if (top >= 0) return stack[top--];
}
Queue Operations:
c
Copy code
int queue[MAX];
int front = 0, rear = -1;
void enqueue(int value) {
    if (rear < MAX - 1) queue[++rear] = value;
}
int dequeue() {
    if (front <= rear) return queue[front++];
}
6. Trees
Binary Tree Node:
c
Copy code
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
Inorder Traversal:
c
Copy code
void inorder(struct Node* node) {
    if (node == NULL) return;
    inorder(node->left);
    printf("%d ", node->data);
    inorder(node->right);
}
7. Sorting Algorithms
Bubble Sort:
c
Copy code
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}
