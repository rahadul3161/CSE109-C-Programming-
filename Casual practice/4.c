#include <stdio.h>

char getGrade(int marks) {
    if (marks >= 90) return 'A';
    else if (marks >= 80) return 'B';
    else if (marks >= 70) return 'C';
    else if (marks >= 60) return 'D';
    else return 'F';
}

int main() {
    char grade = getGrade(85);
    printf("Your grade is %c\n", grade);
    return 0;
}

