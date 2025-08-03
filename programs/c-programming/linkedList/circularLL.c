#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *createNode(int value) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertNode(struct Node **head, int data) {
    struct Node *newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node *current = *head;
        while (current->next != *head) {
            current = current->next;
        }
        current->next = newNode;
    }
    newNode->next = *head;
}

void display(struct Node *head) {
    if (head == NULL) {
        printf("Linked List is empty\n");
        return;
    }
    struct Node *current = head;
    printf("Circular Linked List: \n");
    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != head);
    printf("(head) \n");
}

int main() {
    struct Node *head = NULL;
    for (int i = 1; i < 10; i++) {
        insertNode(&head, i);
    }
    display(head);
}
