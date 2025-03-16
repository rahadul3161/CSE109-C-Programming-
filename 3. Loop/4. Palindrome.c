//Problem- 4: Write a C program to check whether a number is palindrome or not

#include <stdio.h>
int main() {
    int num, temp, rev=0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        digit = temp%10;
        rev = rev*10+digit;
        temp = temp/10;}
    if (num == rev) {
        printf("%d is a palindrome.\n",num);} 
    else {
        printf("%d is not a palindrome.\n",num);}
    return 0;
}
