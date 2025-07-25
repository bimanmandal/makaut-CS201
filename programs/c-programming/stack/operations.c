#include <stdio.h>

#define STACK_SIZE 5
int stack[STACK_SIZE];
int head = -1;


int isEmpty() {
    return head < 0;
}

// Insert an element
void push(int x) {
    if (head == STACK_SIZE - 1) {
        printf("Stack is full. New value %d cannot be added\n", x);
        return;
    }
    // head++;
    // stack[head] = x;
    stack[++head] = x;
    printf("New value added successfully : %d\n", x);
}

// Return the top element, and reduce the stack
int pop() {
    if (isEmpty()) {
        printf("Stack is empty. Cannot be deleted\n");
        return -1;
    }
    // int result = stack[head];
    // head--;
    // return result;
    return stack[head--];
}

// Display the top element
int peek() {
    if (isEmpty()) {
        printf("Empty Stack. Cannot peek elements\n");
    }
    return stack[head];
}

// Display all elements
void display() {
    if (isEmpty()) {
        printf("Stack is empty. Cannot display\n");
    }
    for (int i = head; i >= 0; i--) {
        printf("%d\t", stack[i]);
    }
    printf("\n");
}

int main() {
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    display();
    printf("Popped element %d\n", pop());
    display();
    printf("Popped element %d\n", pop());
    display();
    push(7);
    display();
    return 0;
}
