#include <stdlib.h>
#include <stdio.h>

int main() {
    int *arr;
    int size = 5;

    arr = (int*)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        arr[i] = i;
    }

    printf("Array contents:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}