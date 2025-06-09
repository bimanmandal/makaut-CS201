#include <stdio.h>

int* maxMin(int a[], int size) {
    int result[2];
    int maximum = -99999;
    int minimum = 99999;
    for (int i = 0; i < size; i++) {
        if (maximum < a[i]) {
            maximum = a[i];
        }
        if (minimum > a[i]) {
            minimum = a[i];
        }
    }
    result[0] = maximum;
    result[1] = minimum;
    return result;
}

int main() {
    int a[10] = {15, 10, 2, 49, 35, 30, 5, 17, 37, 9};
    int *result = maxMin(a, 10);
    printf("Maximum: %d\n", result[0]);
    printf("Minimum: %d\n", result[1]);
    return 0;
}
