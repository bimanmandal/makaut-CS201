/*
 * [10, 15, 26, 36, 46]
 * [15, 34, 56, 78]
 *
 * [10, 15, 15, 26, 34, 36, 46, 56, 78]
 */

#include <stdio.h>
int main() {
    int arr1[] = {10, 15, 26, 36, 46};
    int arr2[] = {20, 30, 40, 50, 60};

    int sizeArr1 = sizeof(arr1)/sizeof(arr1[0]);
    int sizeArr2 = sizeof(arr2)/sizeof(arr2[0]);

    int sizeArr3 = sizeArr1 + sizeArr2;

    int arr3[sizeArr3];

    int i = 0, j = 0, k = 0;
    while (i < sizeArr1 && j < sizeArr2) {
        if (arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            k++;
            i++;
        } else {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    while (i < sizeArr1) {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while (j < sizeArr2) {
        arr3[k] = arr2[j];
        k++;
        j++;
    }

    for (i = 0; i < sizeArr3; i++) {
        printf("%d\t", arr3[i]);
    }

    return 0;
}