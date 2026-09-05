#include <stdio.h>
void add_NANR() {
    int a = 10, b = 20, sum;
    sum = a + b;
    printf("[NANR] Sum: %d\n", sum);
}
void add_ANR(int a, int b) {
    int sum = a + b;
    printf("[ANR]  Sum: %d\n", sum);
}
int add_NAWR() {
    int a = 30, b = 40, sum;
    sum = a + b;
    return sum;
}
int add_AWR(int a, int b) {
    int sum = a + b;
    return sum;
}
int main() {
    int result;

    printf("--- Demonstrating 4 Types of Functions in C ---\n\n");
    add_NANR();.
    add_ANR(15, 25);
    result = add_NAWR();
    printf("[NAWR] Sum: %d\n", result);
    result = add_AWR(50, 60);
    printf("[AWR]  Sum: %d\n", result);

    return 0;
}
