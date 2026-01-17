#include <stdio.h>
#include <stdlib.h>


struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct StackNode {
    struct TreeNode* treeNode;
    struct StackNode* next;
};

struct StackNode* top = NULL;

struct StackNode* newLinkNode(struct TreeNode* node) {
    struct StackNode* newNode = malloc(sizeof(struct StackNode));
    newNode->treeNode = node;
    newNode->next = NULL;
    return newNode;
}


struct TreeNode* newTreeNode(int data) {
    struct TreeNode* node = malloc(sizeof(struct TreeNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void push(struct TreeNode* node) {
    struct StackNode* newNode = newLinkNode(node);
    newNode->next = top;
    top = newNode;
}

struct TreeNode* pop() {
    if (top == NULL) {
        return NULL;
    }
    struct StackNode* temp = top;
    struct TreeNode* result = top->treeNode;
    top = top->next;
    free(temp);
    return result;
}

int isStackEmpty() {
    return top == NULL;
}

void displayStack() {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack is :\n");
    struct StackNode* temp = top;
    while (temp != NULL) {
        struct TreeNode* treeNode = temp->treeNode;
        printf("%d ", treeNode->data);
        temp = temp->next;
    }
    printf("\n");
}


void printMenu() {
    printf("MENU\n");
    printf("1. Display stack\n");
    printf("2. Push element\n");
    printf("3. Pop element\n");
    printf("4. Exit\n");
    printf("Your choice : ");
}

void stackOperation() {
    int choice = 0;
    int data;
    while (choice != 4) {
        printMenu();
        scanf("%d", &choice);
        if (choice == 1) {
            displayStack();
        } else if (choice == 2) {
            printf("Enter element for a given tree node: ");
            scanf("%d", &data);
            struct TreeNode* treeNode = newTreeNode(data);
            push(treeNode);
        } else if (choice == 3) {
            struct TreeNode* treeNode = pop();
            printf("Element popped: %d\n", treeNode->data);
        } else if (choice == 4) {
            printf("Doing a system exit.");
        }
    }
}

int dfs(struct TreeNode* root, int key) {
    if (root == NULL) {
        return 0;
    }
    push(root);
    while (!isStackEmpty()) {
        struct TreeNode* treeNode = pop();
        if (treeNode->data == key) {
            return 1;
        }
        if (treeNode->left != NULL) {
            push(treeNode->left);
        }
        if (treeNode->right != NULL) {
            push(treeNode->right);
        }
    }
    return 0;
}

int main() {
    struct TreeNode* root = newTreeNode(10);
    root->left = newTreeNode(5);
    root->right = newTreeNode(15);
    root->left->left = newTreeNode(3);
    root->left->right = newTreeNode(7);
    root->right->left = newTreeNode(4);

    int key = 3;
    int result = dfs(root, key);
    if (result == 1) {
        printf("Key found\n");
    } else {
        printf("Key not found.\n");
    }
}




