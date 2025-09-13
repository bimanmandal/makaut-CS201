#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SIZE 10

struct Item {
    int priority;
    int data;
};

int head = -1, tail = -1;
struct Item queue[QUEUE_SIZE];

int isEmpty() {
    return head == -1 || head > tail;
}

int isFull() {
    return tail == QUEUE_SIZE - 1;
}

void enqueue(int priority, int data) {
    if (isFull()) {
        printf("Queue is full\n");
        return;
    }

    struct Item newItem;
    newItem.priority = priority;
    newItem.data = data;

    if (isEmpty()) {
        head = tail = 0;
        queue[head] = newItem;
        printf("Enqueued %d (priority %d)\n", newItem.data, newItem.priority);
        return;
    }

    // 1-2 , 6-8, 20-55
    // 4-5
    // 1-2  4-5   6-8   20-55

    int i;
    for (i = tail; i >=head && queue[i].priority > newItem.priority; i--) {
        queue[i+1] = queue[i];
    }
    queue[i+1] = newItem;
    tail = tail + 1;
    printf("Enqueued %d (priority %d)\n", newItem.data, newItem.priority);
}

int dequeue() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return -1;
    }
    int data = queue[head].data;
    printf("Dequeued %d\n", data);
    head = head + 1;
    return data;
}

int peek() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return -1;
    }
    return queue[head].data;
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }
    printf("Priority queue: \n");
    for (int i = head; i <= tail; i++) {
        printf("[%d|p%d]\n", queue[i].data, queue[i].priority);
    }
    printf("\n");
}


int main() {
    enqueue(3, 10);
    enqueue(1, 20);
    enqueue(2, 30);
    enqueue(1, 40);

    display();

    dequeue();
    display();
    dequeue();
    display();
    return 0;
}