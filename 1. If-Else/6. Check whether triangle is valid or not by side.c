#include<stdio.h>
int main(){
    float a, b, c, flag = c;
    printf("Enter value for a, b, c\n");
    scanf("%f %f %f", &a, &b, &c);
    
    if (a>b){
        flag=((b+c)>a);}
    else if (b>c){
        flag=((a+c)>b);}
    else {
        flag=((a+b)>c);}
    if (flag) {
        printf("Valid Tringle\n");}
    else {
        printf("Invalid Tringle");}
    return 0;
}