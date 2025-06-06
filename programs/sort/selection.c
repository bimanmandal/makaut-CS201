#include<stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        printf("%d, ", arr[i]);
    }
    printf("%d\n", arr[size - 1]);
}

void printArrayV2(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
}


int main() {

    int a[10] = {15, 10, 2, 49, 35, 30, 5, 17, 37, 9};
    int n = 10;
    int min, temp;
    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    // printArray(a, n);
    return 0;
}