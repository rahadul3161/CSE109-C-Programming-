//C program to check whether a triangle is Equilateral, Isosceles or Scalene
#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter three sides of triangle: \n");
    scanf("%d %d %d", &a, &b, &c);

    if(a==b && b==c) {
        printf("Equilateral triangle.");}
    else if(a==b || a==c || b==c) {
        printf("Isosceles triangle.");}
    else {
        printf("Scalene triangle.");}
        
    return 0;
}