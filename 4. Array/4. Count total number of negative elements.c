#include <stdio.h>
#define MAX_SIZE 100  
int main() {
    int arr[MAX_SIZE];  
    int i, size, count = 0;
    printf("Enter the size: ");
    scanf("%d", &size);
    printf("Enter numbers: ");
    
    for(i=0; i<size; i++) {
        scanf("%d", &arr[i]);}
    for(i=0; i<size; i++){
        if(arr[i] < 0) {
            count++;}}
    printf("Total negative numbers = %d", count);

    return 0;
}