/*
 *Algorithm:
 *1. Start
 *2. Declare an array a of size n
 *3. Read the array a
 *4. For i range 0 to n - 1
 *      a. For j in 0 to n - 1 -i
 *          a.1 if a[j] > a[j+1], swap two elements
 *5. END
 */

#include<stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        printf("%d, ", arr[i]);
    }
    printf("%d\n", arr[size - 1]);
}


int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Enter the element of the array with index[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}
