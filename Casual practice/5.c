#include <stdio.h>

void modifyArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] += 5;  // Increment each element by 5
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    modifyArray(arr, 5);  // Array is modified in place
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);  // Output the modified array
    }
    return 0;
}

