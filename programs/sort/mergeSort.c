#include <stdio.h>


void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int sizeArr1 = mid - left + 1;
    int sizeArr2 = right - mid; 

    int arr1[sizeArr1];
    int arr2[sizeArr2];

    for (i = 0; i < sizeArr1; i++) {
        arr1[i] = arr[left + i];
    }

    for (j = 0; j < sizeArr2; j++) {
        arr2[j] = arr[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = left;

    while (i < sizeArr1 && j < sizeArr2) {
        if (arr1[i] < arr2[j]) {
            arr[k] = arr1[i];
            k++;
            i++;
        } else {
            arr[k] = arr2[j];
            k++;
            j++;
        }
    }

    while (i < sizeArr1) {
        arr[k] = arr1[i];
        k++;
        i++;
    }

    while (j < sizeArr2) {
        arr[k] = arr2[j];
        k++;
        j++;
    }

}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }

}

int main() {
    int arr[] = {6, 4, 5, 7, 8, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
