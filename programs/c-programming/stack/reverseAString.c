#include <stdio.h>
#include <stdlib.h>

struct Node {
    char data;
    struct Node* next;
};

struct Node* createNode(char value) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

int isEmpty(struct Node* top) {
    return top == NULL;
}

void push(struct Node** top, char value) {
    struct Node* newNode = createNode(value);
    newNode->next = *top;
    *top = newNode;
    printf("%c pushed to stack\n", value);
}

char pop(struct Node** top) {
    if (isEmpty(*top)) {
        printf("Stack underflow\n");
        return '\0';
    }
    struct Node* temp = *top;
    char popped = temp->data;
    *top = (*top)->next;
    free(temp);
    printf("%c popped from stack\n", popped);
    return popped;
}

void display(struct Node* top) {
    if (isEmpty(top)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    struct Node* temp = top;
    while (temp) {
        printf("%c -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    char s[150];
    int i = 0;
    struct Node* top = NULL;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    while (s[i] != '\n' && s[i] != '\0') {
        push(&top, s[i]);
        i++;
    }

    i = 0;
    while (!isEmpty(top)) {
        s[i]= pop(&top);
        i++;
    }

    printf("String  after reversing is %s\n", s);
}