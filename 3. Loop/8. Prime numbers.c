//Problem-8: Practice all types of questions related to prime numbers and Fibonacci series in C.

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num<2) {
        printf("This is not a prime number.");
        return 0; }
        
    for (int i=2; i<num; i++) {
        if (num%i==0) {
            printf("This is a prime number.");
            return 0; }
    }
    printf("This is not a Prime number.");
    return 0;
}
