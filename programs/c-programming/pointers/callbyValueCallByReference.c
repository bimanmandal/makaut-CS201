#include <stdio.h>
// Call by Value
int swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Call by reference
int swap2(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 10, b = 20;
    swap(a, b);
    swap2(&a, &b);
    printf("Value of a is %d, Value of b is %d\n", a, b);
    return 0;
}