#include <stdio.h>
int add_numbers(int num1, int num2);

int main() {
    int a, b, result;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b)
    result = add_numbers(a, b);
    printf("The sum of %d and %d is: %d\n", a, b, result);

    return 0;
}
int add_numbers(int num1, int num2) {
    return num1 + num2; 
}
