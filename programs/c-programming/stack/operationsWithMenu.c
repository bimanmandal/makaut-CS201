#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *next;
};

struct Node *createNode(int data) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int isEmpty(struct Node *top) {
    return top == NULL;
}

void push(struct Node **top, int data) {
    struct Node *newNode = createNode(data);
    newNode->next = (*top);
    *top = newNode;
    printf("%d pushed to stack \n", data);
}

int pop(struct Node **top) {
    if (isEmpty(*top)) {
        printf("Stack is empty\n");
        return 0;
    }
    struct Node *temp = *top;
    int data = temp->data;
    *top = temp->next;
    free(temp);
    printf("%d popped from stack \n", data);
    return data;
}

void display(struct Node *top) {
    if (isEmpty(top)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Elements of stack are : \n");
    struct Node *temp = top;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void printMenu() {
    printf("MENU\n");
    printf("1. Display stack\n");
    printf("2. Push element\n");
    printf("3. Pop element\n");
    printf("4. Exit\n");
    printf("Your choice : ");
}


int main() {
    int choice = 0;
    int data;
    struct Node *top = NULL;
    while (choice != 4) {
        printMenu();
        scanf("%d", &choice);
        if (choice == 1) {
            display(top);
        } else if (choice == 2) {
            printf("Enter element to be pushed : ");
            scanf("%d", &data);
            push(&top, data);
        } else if (choice == 3) {
            pop(&top);
        } else if (choice == 4) {
            printf("Doing a system exit.");
        } else {
            printf("Invalid choice. Please enter a correct one. \n");
        }
    }
}
