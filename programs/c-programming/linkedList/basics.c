#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};


struct Node* createNode(int value) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertNode(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;

}


void deleteNode(struct Node** head, int data) {
    struct Node* current = *head;
    struct Node* previous = NULL;

    if (current != NULL && current->data == data ) {
        *head = current->next;
        free(current);
        return;
    }

    while (current != NULL && current->data != data) {
        previous = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Node not found\n");
        return;
    }

    previous->next = current->next;
    free(current);



}

void display(struct Node* head) {
    struct Node* current = head;
    printf("\n Linked List \n");
    while (current != NULL) {
        printf(" %d -> ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    insertNode(&head, 10);
    insertNode(&head, 20);
    insertNode(&head, 30);
    insertNode(&head, 40);
    insertNode(&head, 50);
    insertNode(&head, 60);
    insertNode(&head, 70);
    display(head);
    deleteNode(&head, 10);
    display(head);
    deleteNode(&head, 70);
    display(head);
    deleteNode(&head, 40);
    display(head);
    return 0;
}