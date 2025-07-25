#include <stdio.h>
int main() {
    int a = 10;
    int *p = &a;
    int **q = &p;

    printf("%d\n", *p);
    printf("%p\n", p);
    printf("%p\n", &a);

    printf("%d\n", **q);
    printf("%p\n", *q);
    printf("%p\n", q);
    printf("%p\n", &p);
    return 0;
}