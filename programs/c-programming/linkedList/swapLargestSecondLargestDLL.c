#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* createNode(int data) {
    struct Node* node = malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

void insertEnd(struct Node** head, int data) {
    struct Node* node = createNode(data);
    if (*head == NULL) {
        *head = node;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = node;
    node->prev = temp;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void swapLargestSecondLargest(struct  Node* head) {
    if (head == NULL || head->next == NULL) {
        printf("List is too small to swap \n");
    }

    struct Node *temp = head;
    struct Node *largest = head;
    struct Node *second = NULL;

    while (temp != NULL) {
        if (temp->data > largest->data) {
            second = largest;
            largest = temp;
        } else if (second == NULL || temp->data > second->data && temp->data < largest->data) {
            second = temp;
        }
        temp = temp->next;
    }

    if (largest != NULL && second != NULL) {
        int tmp = second->data;
        second->data = largest->data;
        largest->data = tmp;
    }
}

int main() {

    struct Node* head = NULL;
    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);
    insertEnd(&head, 50);
    insertEnd(&head, 60);
    printList(head);
    swapLargestSecondLargest(head);
    printf("LinkedList after swapping \n");
    printList(head);
}