#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int item) {
    struct Node* temp = malloc(sizeof(struct Node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}

struct Node* queue[100];
int head = 0;
int tail = 0;

void enqueue(struct Node* node) {
    queue[tail++] = node;
}

struct Node* dequeue() {
    return queue[head++];
}

int isEmpty() {
    return head == tail;
}

int bfs(struct Node* root, int key) {
    if (root == NULL) {
        return 0;
    }
    enqueue(root);
    while (!isEmpty()) {
        struct Node* current = dequeue();
        if (current->data == key) {
            return 1;
        }

        if (current->left != NULL) {
            enqueue(current->left);
        }

        if (current->right != NULL) {
            enqueue(current->right);
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

    int key = 30;
    int result = bfs(root, key);
    if (result == 1) {
        printf("Key found\n");
    } else {
        printf("Key not found\n");
    }
    return 0;
}

