#include <stdio.h>
#include <math.h>

int main(){
    //Compound Interest Calculator

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded=0;
    double total=0.0;

    printf("Compound Interest Calculator\n");
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (as a percentage): ");
    scanf("%lf", &rate);
    rate=rate/100;

    printf("Enter the number of years: ");
    scanf("%d", &years);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &timesCompounded);

    total = principal * pow(1 + (rate / timesCompounded), timesCompounded * years);

    printf("The total amount after %d years is £ %.2lf\n", years, total);
}
