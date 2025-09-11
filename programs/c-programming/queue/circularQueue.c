#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SIZE 5
int front = -1, rear = -1;
int queue[QUEUE_SIZE];

int isFull() {
    return (front ==0 && rear == QUEUE_SIZE - 1) || front == rear + 1;
}

int isEmpty() {
    return front == -1;
}

void enqueue(int item) {
    if (isFull()) {
        printf("Queue is full\n");
        return;
    }
    if (isEmpty()) {
        front = 0;
    }
    rear = (rear + 1) % QUEUE_SIZE; // rear =
    queue[rear] = item;
    printf(" %d enqueued to queue \n", item);
}

int dequeue() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return -1;
    }
    int item = queue[front];
    if (front == rear) {
        front = -1;
    } else {
        front = (front + 1) % QUEUE_SIZE;
    }
    return item;
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue is: ");
    int i = front;
    while (i != rear) {
        printf("%d ", queue[i]);
        i = (i + 1) % QUEUE_SIZE;
    }
    printf("%d ", queue[rear]);
    printf("\n");
}

void printArray() {
    printf("Array is: ");
    for (int i = 0; i < QUEUE_SIZE; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    enqueue(1);
    printArray();
    display();
    enqueue(2);
    printArray();
    display();
    enqueue(3);
    printArray();
    display();
    enqueue(4);
    printArray();
    display();
    enqueue(5);
    printArray();

    display();
    printf("Dequeue is %d\n", dequeue());
    printArray();
    display();
    printf("Dequeue is %d\n", dequeue());
    printArray();
    display();
    printf("Dequeue is %d\n", dequeue());
    printArray();
    display();
    enqueue(6);
    printArray();
    display();
    enqueue(7);
    display();
    printArray();
    display();
    enqueue(8);
    printArray();
    display();

}