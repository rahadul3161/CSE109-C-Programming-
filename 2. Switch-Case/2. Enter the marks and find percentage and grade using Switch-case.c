//Write a C program to enter the marks of a student and find percentage and grade. 
#include <stdio.h>
int main() {
    float marks, percentage;
    char grade;
    printf("Enter marks: ");
    scanf("%f", &marks);

    percentage = marks;
    switch ((int)(marks/10)) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F'; }
    printf("Percentage: %.2f%%\n",percentage);
    printf("Grade: %c\n",grade);
    return 0;
}
