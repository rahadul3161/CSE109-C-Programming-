#include <stdio.h>

double calculateArea(double radius) {
    return 3.14159 * radius * radius;
}

int main() {
    double area = calculateArea(5.0);
    printf("Area of the circle is %.2f\n", area);
    return 0;
}

