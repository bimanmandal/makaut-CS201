// A*(B+C)/D infix
// 4 * (5+6)/ 2 = 4 * 11 / 2 = 44/2 = 22
// 4 * (56+) / 2 = 456+* / 2 = 456+*2/
// A+B = infix
// AB+ = postfix
// +AB = prefix

#include <ctype.h>
#include <stdio.h>

#define MAX_SIZE 100
char stack[MAX_SIZE];
int top = -1;

int isEmpty() {
    return top < 0;
}

void push(char c) {
    if (top == MAX_SIZE - 1) {
        printf("Stack is full\n");
        return;
    }
    stack[++top] = c;
}

char pop() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return '\0';
    }
    return stack[top--];
}

int precedence(char c) {
    if (c == '+' || c == '-') {
        return 1;
    }
    if (c == '*' || c == '/') {
        return 2;
    }
    return 0;
}

// Stack
// /

// postfix
// ABC+*D/

void infixPostfix(char infix[], char postfix[]) {
    printf("Inside infix to postfix : \n");
    int i = 0, j = 0;
    char ch;

    // A+B*C = ABC*+
    // A*B+C = AB*C+
    // A*(B+C)/D
    while (infix[i] != '\0' && infix[i] != '\n') {
        ch = infix[i]; // A
        printf("Processing %c \n", ch);
        // if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9') {
        if (isalnum(ch)) {
            postfix[j++] = ch;
        } else if (ch == '(') {
            push(ch);
        } else if (ch == ')') {
            while (top != -1 && stack[top] != '(') {
                postfix[j++] = pop();
            }
            pop();
        } else {
            while (top != -1 && precedence(stack[top]) >= precedence(ch)) {
                postfix[j++] = pop();
            }
            push(ch);
        }
        i++;
    }
    while (top != -1) {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
}

int main() {
    char infix[100], postfix[100];
    printf("Enter the infix expression : ");
    scanf("%s", infix);
    printf("Evaluating infix expression : %s \n", infix);
    infixPostfix(infix, postfix);
    printf("The postfix expression is : %s\n", postfix);
}
