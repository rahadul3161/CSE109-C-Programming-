//Write a C program to perform matrix addition, matrix subtraction, scalar multiplication and matrix multiplication.
#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&rows,&cols);

    int A[rows][cols], B[rows][cols], result[rows][cols];
    printf("Enter elements for matrix A: \n");
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            printf("A[%d][%d]: ",i+1, j+1);
            scanf("%d",&A[i][j]); }}

    printf("Enter elements for matrix B: \n");
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            printf("B[%d][%d]: ",i+1, j+1);
            scanf("%d",&B[i][j]); }}

    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            result[i][j] = A[i][j]+B[i][j]; }}
            
    printf("Matrix A + Matrix B is: \n");
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            printf("%d ",result[i][j]);  }
        printf("\n");
    }
    return 0;
}
