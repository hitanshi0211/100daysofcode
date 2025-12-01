#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simple_interest, compound_interest;

    // Input principal, rate and time
    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter time (in years): ");
    scanf("%lf", &time);

    // Calculate Simple Interest
    simple_interest = (principal * rate * time) / 100.0;

    // Assume interest is compounded annually
    compound_interest = principal * pow((1 + rate / 100.0), time) - principal;

    printf("\nSimple Interest = %.2lf\n", simple_interest);
    printf("Compound Interest = %.2lf\n", compound_interest);

    return 0;
}