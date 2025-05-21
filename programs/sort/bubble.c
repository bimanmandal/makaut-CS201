/*
 *Algorithm:
 *1. Start
 *2. Declare an array a of size n
 *3. Read the array a
 *4. For i range 0 to n - 1
 *      a. For j in 0 to n - 1
 *
 *
 *
 *
 *
 *
 */

#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        printf("%d, ", arr[i]);
    }
    printf("%d\n", arr[size - 1]);
}

#include<stdio.h>

int main() {
    int a[10] = {15, 10, 2, 49, 35, 30, 5, 17, 37, 9};
    int n = 10;
    int temp;
    printArray(a, n);
    // a[0], a[1]...a[9]
    // a[10]
    // J range 0 to 8
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printArray(a, n);
    return 0;
}
