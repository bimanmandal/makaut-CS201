#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *p = arr;

    printf("Value at Pointer : %d \n", *p);
    printf("Value at Pointer : %d \n", *(p + 1));

    for (int i = 0; i < 3; i++) {
        printf("%d \t", arr[i]);
    }

    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("%d \t", *(p + i));
    }
    return 0;
}
