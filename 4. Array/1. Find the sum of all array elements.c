#include <stdio.h>
int main() {
    int array[100];
    int n, i, sum = 0;

    printf("Enter the numbers: ");
    scanf("%d", &n);

    printf("Enter %d values: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        sum += array[i];}
    printf("The sum of all elements in the array is: %d", sum);

    return 0;
}
