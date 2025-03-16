#include <stdio.h>
#define MAX_SIZE 100
int main(){
    int arr[MAX_SIZE];
    int i, size, a;

    printf("Enter the size: ");
    scanf("%d", &size);
    printf("Enter elements: ");
    for(i=0; i<size; i++) {
        scanf("%d", &arr[i]);}

    printf("Enter the element position to delete : ");
    scanf("%d", &a);

    if(a < 0 || a > size){
        printf("Invalid position! Please enter position between 1 to %d", size);}
    else {
        for(i=a-1; i<size-1; i++){
            arr[i] = arr[i + 1];}
        size--;

        printf("\nElements of array after delete are : ");
        for(i=0; i<size; i++){
            printf("%d\t", arr[i]);}}

    return 0;
}