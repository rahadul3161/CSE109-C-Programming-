//Problem-3: Write a C program to design a calculator with basic operations using switch case.
#include <stdio.h>
int main() {
    int num1, num2, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("1. Add\n2. Sub\n3. Mul\n4. Div\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Result: %d\n", num1 + num2); break;
        case 2: printf("Result: %d\n", num1 - num2); break;
        case 3: printf("Result: %d\n", num1 * num2); break;
        case 4: 
            if(num2) 
                printf("Result: %.2f\n",(float)num1/num2); 
            else 
                printf("Error! Division by zero.\n");
            break;
        default: printf("Invalid choice.\n"); }
    return 0;
}
