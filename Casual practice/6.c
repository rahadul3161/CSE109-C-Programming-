#include <stdio.h>

// Function to perform sequential search
int sequentialSearch(int array[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            return i;  // Return the index of the target element
        }
    }
    return -1;  // Return -1 if the target is not found
}

int main() {
    int arr[] = {34, 78, 12, 54, 89, 23, 77};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 54;
    int result = sequentialSearch(arr, size, target);

    if (result != -1) {
        printf("Element is found at index: %d\n", result);
    } else {
        printf("Element is not found in the array\n");
    }

    return 0;
}

