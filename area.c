#include <stdio.h>
#define PI 3.14159265359

int main() {
    double radius, area;
    printf("Enter the radius of the circle: ");
    if (scanf("%lf", &radius) != 1) {
        printf("Invalid input! Please enter a numeric value.\n");
        return 1;
    }
    if (radius < 0) {
        printf("Radius cannot be negative.\n");
        return 1;
    }
    area = PI * radius * radius;
    printf("The area of the circle with radius %.2lf is: %.2lf\n", radius, area);
 return 0;
}
