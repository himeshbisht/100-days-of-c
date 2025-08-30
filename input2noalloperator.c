#include <stdio.h>

int main() {
    int a, b;   
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    int sum;
    sum = a + b;
    printf("\nSum = %d", sum);
    int diff;
    diff = a - b;
    printf("\nDifference = %d", diff);
    int prod;
    prod = a * b;
    printf("\nProduct = %d", prod);
    int quot;
    quot = a / b;
    printf("\nQuotient = %d", quot);

    return 0;
}
