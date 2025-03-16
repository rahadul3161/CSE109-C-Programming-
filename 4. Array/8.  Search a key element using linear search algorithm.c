#include <stdio.h>
int main(){
    int num[]={10,2,15,20,35,46,85};
    int value, pos=-1,i;
    printf("Enter the value what you want ot search: ");
    scanf("%d",&value);
    
    for (i=0; i<7; i++) {
        if (value==num[i]) {
            pos=i+1;
            break;}}
    if(pos==-1) {
        printf("Not found!");}
    else {
        printf("It if found at %d position",pos);}
}