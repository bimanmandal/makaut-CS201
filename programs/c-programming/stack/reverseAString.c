#include <stdio.h>
#include <stdlib.h>


struct Node {
    char data;
    struct Node* next;
};

struct Node* createNode(char data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int isEmpty(struct Node* top) {
    /*if (top == NULL) {
        return 1;
    } else {
        return 0;
    }*/
    return top == NULL;
}

void push(struct Node** top, char data) {
    struct Node* newNode = createNode(data);
    newNode->next = (*top);
    *top = newNode;
    printf("%c pushed to stack \n", data);
}

char pop(struct Node** top) {
    if (isEmpty(*top)) {
        printf("Stack is empty\n");
        return '\0';
    }
    struct Node* temp = *top;
    char data = temp->data;
    *top = temp->next;
    free(temp);
    printf("%c popped from stack \n", data);
    return data;
}

void display(struct Node* top) {
    if (isEmpty(top)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Elements of stack are : \n");
    struct Node* temp = top;
    while (temp != NULL) {
        printf("%c -> \n", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


int main() {
    char str[100];
    printf("Enter the string\n");
    fgets(str, 100, stdin);

    struct Node* top = NULL;
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        push(&top, str[i]);
        i++;
    }

    i = 0;
    while (!isEmpty(top)) {
        str[i] = pop(&top);
        i++;
    }

    printf("%s\n", str);


}






