//Problem-1: Write a C program that counts the number of digits and calculates the sum of all digits in a given number
#include <stdio.h>
int main() {
    int num, count = 0, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num!= 0) {
        digit = num%10; 
        sum += digit;  
        count++;       
        num /= 10; }

    printf("Number of digits: %d\n",count);
    printf("Sum of digits: %d\n",sum);
    return 0;
}
