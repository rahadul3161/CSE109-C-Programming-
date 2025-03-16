#include <stdio.h>

#define ROWS 3
#define COLS 3

void modifyArray(int array[][COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            array[i][j] += 10;  // Increment each element by 10
        }
    }
}

int main() {
    int arr[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    modifyArray(arr, ROWS);  // Pass the array to the function

    // Print the modified array
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

