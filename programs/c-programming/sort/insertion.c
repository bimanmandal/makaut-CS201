#include<stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        printf("%d, ", arr[i]);
    }
    printf("%d\n", arr[size - 1]);
}


int main() {
    int a[10] = {15, 10, 2, 49, 35, 30, 5, 17, 37, 9};
    int n = 10;


    // Take a element
    // Compare with previous
    // if greater, then shift that element
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    printArray(a, n);
    return 0;
}
