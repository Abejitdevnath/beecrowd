#include <stdio.h>

int main() {
    float r, solve, pi;
    pi = 3.14159;

    printf("Enter your redius value: ");
    scanf("%f", &r);

    solve = pi * r * r;

    printf("A: %.4f\n", solve);

    return 0;
}
