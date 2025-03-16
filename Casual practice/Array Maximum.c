#include<stdio.h>
int main(){
    int arr[100],n, i;
    printf("How many number: ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=1; i<n; i++){
        if(max<arr[i])
            max=arr[i];
        }
        printf("Maximum = %d\n",max);
    }


