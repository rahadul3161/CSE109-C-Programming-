#include<stdio.h>
int main(){
    int arr[100],n, i;
    printf("How many number: ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(i=1; i<n; i++){
        if(min>arr[i])
            min=arr[i];
        }
        printf("Minimum = %d\n",min);
    }


