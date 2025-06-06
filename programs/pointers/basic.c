#include <stdio.h>
int main() {
    int a = 10;
    int *p = &a;
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Pointer points to %p \n", p);
    printf("Value at Pointer : %d \n", *p);
    return 0;
}