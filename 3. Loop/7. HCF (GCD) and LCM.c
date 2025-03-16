//Problem-7: Write a C program to find the HCF (GCD) and LCM of two numbers.

#include <stdio.h>
int main() {
    int num1, num2, HCF, LCM;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    for (int i=1; i<=num1 && i<=num2; i++) {
        if (num1%i==0 && num2%i==0) {
            HCF = i; }
    }
    LCM = (num1 * num2) / HCF;
    printf("HCF of %d and %d is: %d\n", num1, num2, HCF);
    printf("LCM of %d and %d is: %d\n", num1, num2, LCM);
    return 0;
}
