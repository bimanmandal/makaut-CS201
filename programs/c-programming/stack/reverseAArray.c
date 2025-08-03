#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int isEmpty(struct Node* top) {
    return top == NULL;
}

void push(struct Node** top, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *top;
    *top = newNode;
    printf("%d pushed to stack \n", data);
}

int pop(struct Node** top) {
    if (isEmpty(*top)) {
        printf("Stack is empty\n");
        return '\0';
    }
    struct Node* temp = *top;
    int data = temp->data;
    *top = temp->next;
    free(temp);
    printf("%d popped from stack \n", data);
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
        printf("%d -> \n", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


int main() {
    int array_size;
    printf("Enter size of array : ");
    scanf("%d", &array_size);
    int array[array_size];
    printf("Enter elements of array : \n");
    for (int i = 0; i < array_size; i++) {
        printf("Enter array[%d] : ", i);
        scanf("%d", &array[i]);
    }
    struct Node* top = NULL;
    for (int i = 0; i < array_size; i++) {
        push(&top, array[i]);
    }
    for (int i = 0; i < array_size; i++) {
        array[i] = pop(&top);
    }

    printf("The reversed array is : \n");
    for (int i = 0; i < array_size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");


}






