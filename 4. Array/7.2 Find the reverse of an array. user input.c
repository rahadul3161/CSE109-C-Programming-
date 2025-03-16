// Find the reverse of an array
#include <stdio.h>
int main() {
    int size;
    printf("Enter the size of the array and press Enter button: ");
    scanf("%d",&size);
    
    int arr[size];
    printf("Enter %d elements using space: ",size);
    for (int i=0; i<size; i++) {
        scanf("%d",&arr[i]);}
    
    for (int i=0; i<size/2; i++) {
        int temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;}
    
    for (int i=0; i<size; i++) {
        printf(" %d",arr[i]);}
    return 0;
}