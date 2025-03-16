#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int arr[MAX_SIZE];
    int i, size, num, a;
    printf("Enter the size: ");
    scanf("%d", &size);
    printf("Enter elements: ");
    
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);}

    printf("Enter element to insert : ");
    scanf("%d", &num);
    printf("Enter the element position : ");
    scanf("%d", &a);

    if(a > size+1 || a <= 0){
        printf("Invalid! Please enter between 1 to %d", size);}
    else {
        for(i=size; i>=a; i--) {
            arr[i] = arr[i-1];}
        
        arr[a-1] = num;
        size++; 
        printf("Array elements after insertion : ");
        for(i=0; i<size; i++) {
            printf("%d\t", arr[i]);}}
    return 0;
}