#include <stdio.h>
long long factorial(int n);

int main() {
    int num;
    
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }
    if (num < 0) {
        printf("Error: Factorial of a negative number does not exist.\n");
    } else {
        printf("Factorial of %d = %lld\n", num, factorial(num));
    }

    return 0;
}
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}
