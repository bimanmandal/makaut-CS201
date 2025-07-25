// Fibonacci Number: 0 1 1 2 3 5 8 13 21...

// 1 1 2
#include <stdio.h>
int main() {

    int number;
    printf("Enter the no of numbers that you want to get in fibonacci: ");
    scanf("%d", &number);

    // number = 0
    // output = 0

    // number = 1
    // output = 0

    // number = 2
    // output = 0 1

    // number = 3
    // output = 0 1 1

    // number = 4
    // output = 0 1 1 2

    // number = 5
    // output = 0 1 1 2 3

    // number = 6
    // output = 0 1 1 2 3 5

    // 1 1 2

    int a = 0, b = 1, fib;
    if (number >= 1) {
        printf("%d ", a);
    }
    if (number >= 2) {
        printf("%d ", b);
    }
    for (int i = 2; i < number; i++) {
        fib = a + b;
        printf("%d ", fib);
        a = b;
        b = fib;
    }
    printf("\n");

    return 0;
}