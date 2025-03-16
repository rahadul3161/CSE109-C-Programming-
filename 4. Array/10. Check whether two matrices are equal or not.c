//Check whether two matrices are equal or not.
#include <stdio.h>
int main() {
    int rows, cols, equal = 1;
    scanf("%d %d",&rows,&cols);

    int A[rows][cols], B[rows][cols];
    for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++)
            scanf("%d",&A[i][j]);

    for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++)
            if (A[i][j] != B[i][j]) {
                equal = 0; 
                break; }
                
    if (equal)
        printf("Matrices are equal.\n");
    else
        printf("Matrices are not equal.\n");
    return 0;
}
