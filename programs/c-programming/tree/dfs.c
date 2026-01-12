#include<stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int data) {
    struct Node* node = malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct Node* stack[100];
int top = -1;

void push(struct Node* node) {
    printf("%d inserted\n", node->data);
    stack[++top] = node;
}

struct Node* pop() {
    return stack[top--];
}

int isStackEmpty() {
    return top == -1;
}

int dfs(struct Node* root, int key) {
    if (root == NULL) {
        return 0;
    }

    push(root);
    while (!isStackEmpty()) {
        struct Node* current = pop();
        if (current->data == key) {
            return 1;
        }
        if (current->left != NULL) {
            push(current->left);
        }
        if (current->right != NULL) {
            push(current->right);
        }
    }
    return 0;
}

int main() {
    struct Node* root = newNode(10);
    root->left = newNode(5);
    root->right = newNode(15);
    root->left->left = newNode(3);
    root->left->right = newNode(7);
    root->right->left = newNode(4);

    int key = 3;
    int result = dfs(root, key);
    if (result == 1) {
        printf("Key found\n");
    } else {
        printf("Key not found\n");
    }
    return 0;
}