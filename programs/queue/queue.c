/*
 * Queue:
 * insert: enqueue
 * remove: dequeue
 * peek: get the head element
 *
 */

#include <stdio.h>
#define QUEUE_SIZE 10
int head = -1, tail = -1;
int queue[QUEUE_SIZE];

int isEmpty() {
    return head > tail || head == -1;
}

int isFull() {
    return tail == QUEUE_SIZE - 1;
}

// insert
void enqueue(int data) {
    if (isFull()) {
        printf("Queue is full\n");
        return;
    }
    if (head == -1) {
        head = 0;
    }
    tail = tail + 1;
    queue[tail] = data;
    printf("Enqueued %d\n", data);
}

// Delete operation
int dequeue() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return -1;
    }
    int data = queue[head];
    head = head + 1;
    return data;
}


int peek() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return -1;
    }
    return queue[head];
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = head; i <= tail; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    enqueue(1);
    enqueue(2);
    display();
    enqueue(3);
    enqueue(4);
    display();
    printf("Deleted from queue is : %d\n", dequeue());
    printf("Deleted from queue is : %d\n", dequeue());
    display();
}
