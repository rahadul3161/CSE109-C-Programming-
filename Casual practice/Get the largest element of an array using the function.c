//Get the largest element of an array using the function.
#include <stdio.h>
void largNum(int array[],int n){
    int larg=array[0];
    int i;
    for(i=1;i<n;i++){
        if(larg<array[i]){
             larg=array[i];
           }}
    printf("The largest element:%d",larg);
}

int main(){
    int n, i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int array[n];
    printf("Enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    largNum(array,n);
    return 0;
}
