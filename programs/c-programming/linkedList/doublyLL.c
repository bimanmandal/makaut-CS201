#include <stdio.h>
#include <stdlib.h>


// (prev) data (next)
struct Node {
    struct Node* prev;
    int data;
    struct Node* next;
};


// [() 5 () ]
struct Node* createNode(int data) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->prev = NULL;
    newNode->data = data;
    newNode->next = NULL;
    printf("Node created %d\n", data);
    return newNode;
}


// ()5(1) -> (5)1(2) -> (1)2(3) -> (2)3(null)
// head : 1
// data: 5
// [() 5 (1) ]

void insertAtHead(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    if (*head != NULL) {
        (*head)->prev = newNode;
    }
    *head = newNode;
}

void insertAtTail(struct Node** head, int data) {
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
    newNode->prev = current;
}

// A -> N -> S

// ()5(1) -> (5)1(2) -> (1)2(3) -> (2)3(null)
// current : (1)2(3)
// ()5(1) -> (5)1(3) ->  (1)3(null)

void deleteNode(struct Node** head, int data) {
    printf("Deleting node %d\n", data);
    struct Node* current = *head;
    while (current != NULL && current->data != data) {
        current = current->next;
    }
    if (current == NULL) {
        printf("Data not found\n");
        return;
    }

    if (current->prev != NULL) {
        current->prev->next = current->next;
    } else {
        *head = current->next;
    }
    if (current->next != NULL) {
        current->next->prev = current->prev;
    }
    free(current);

}

void display(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    insertAtTail(&head, 10);
    display(head);
    insertAtTail(&head, 20);
    display(head);
    insertAtTail(&head, 30);
    display(head);
    insertAtTail(&head, 40);
    display(head);
    insertAtHead(&head, 5);
    display(head);
    deleteNode(&head, 30);
    display(head);
}

