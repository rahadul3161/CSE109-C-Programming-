//Input angles of a triangle and check whether the triangle is valid or not.
#include <stdio.h>
int main() {
    int a, b, c, sum;
    printf("Enter 3 angles of triangle: \n");
    scanf("%d %d %d", &a, &b, &c);
    sum = a+b+c;
    
    if (sum==180 && a!=0 && b!=0 && c!=0){
        printf("It is a triangle: ");}
    else {
        printf("It is not a triangle: ");}
    return 0;
}
