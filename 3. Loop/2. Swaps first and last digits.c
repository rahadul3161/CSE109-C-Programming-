//Problem-2: Write a C program that finds the first and last digits of a number and then swaps them.

#include <stdio.h>
int main() {
    int num, firstDigit, lastDigit, temp, div=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    lastDigit=num%10;
    temp=num;
    while (temp>=10) {
        temp/=10;
        div=div*10;
    }
    firstDigit=temp;
    num = num-(firstDigit*div)+(lastDigit*div);
    num = num-lastDigit+firstDigit; 
    printf("Number after swapping: %d",num);
    return 0;
}
