#include <stdio.h>
#define MAX_SIZE 100 
int main() {
    int arr[MAX_SIZE];
    int i, size, even, odd;
    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for(i=0; i<size; i++) {
        scanf("%d", &arr[i]);}

    even = 0;
    odd  = 0;

    for(i=0; i<size; i++) {
        if(arr[i]%2 == 0) {
            even++;}
        else {
            odd++;}}
    printf("Total even numbers: %d\n", even);
    printf("Total odd numbers: %d", odd);

    return 0;
}