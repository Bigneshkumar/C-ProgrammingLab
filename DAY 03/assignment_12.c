#include <stdio.h>
#include <math.h> 
int main() 
{
    double principal, rate, time, compoundInterest, amount;
    printf("Enter Principal Amount: ");
    scanf("%lf", &principal);
    printf("Enter Rate of Interest (in %%): ");
    scanf("%lf", &rate);
    printf("Enter Time (in years): ");
    scanf("%lf", &time);
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;
    printf("Compound Interest = %.2lf\n", compoundInterest);
    printf("Total Amount = %.2lf\n", amount);
    return 0;
}
