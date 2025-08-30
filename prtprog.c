#include <stdio.h>


int main() {
    float principal, rate, time;
    float si, ci;

    
    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    
    si = (principal * rate * time) / 100;

    
    ci = principal * (pow((1 + rate / 100), time)) - principal;

    
    printf("\nSimple interest = %.2f", si);
    printf("\nCompound Interest = %.2f", ci);

    return 0;
}
