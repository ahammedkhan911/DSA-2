#include <stdio.h>

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int pivotPartition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j < high; j++){  // Use j = low to high-1 to avoid out-of-bounds
        if(arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j]);  // Pass by reference for correct swap
        }
    }
    i++;
    swap(&arr[i], &arr[high]);
    return i;
}

void quicksort(int arr[], int low, int high){
    if(low < high){
        int p = pivotPartition(arr, low, high);
        quicksort(arr, low, p - 1);
        quicksort(arr, p + 1, high);
    }
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {6, 5, 12, 10, 9, 11, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    quicksort(arr, 0, size - 1);

    printf("Sorted array: ");
    printArray(arr, size);

    return 0;
}

