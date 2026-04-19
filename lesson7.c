#include <stdio.h>
#include <math.h>

int main(){
    //Math Functions

    double num1 = 5.0;
    double num2 = 3.0;
    double num3 = 5.7;

    printf("The value of pi is %.15lf\n", M_PI);
    printf("The value of e is %.15lf\n", M_E);

    printf("The square root of %.2lf is %.2lf\n", num1, sqrt(num1));
    printf("%.2lf raised to the power of %.2lf is %.2lf\n", num1, num2, pow(num1, num2));
    printf("The absolute value of %.2lf is %.2lf\n", -num1, fabs(-num1));
    printf("The ceiling of %.2lf is %.2lf\n", 3.7, ceil(3.7));
    printf("The floor of %.2lf is %.2lf\n", 3.7, floor(3.7));
    printf("num3 rounded to the nearest integer is %.2lf\n", round(num3));
    printf("the log of %.2lf is %.2lf\n", num1, log(num1));
    printf("the exponential of %.2lf is %.2lf\n", num1, exp(num1));
    printf("sin(45 degrees) is %.2lf\n", sin(45 * M_PI / 180)); // Convert degrees to radians
    printf("cos(45 degrees) is %.2lf\n", cos(45 * M_PI / 180)); // Convert degrees to radians
    printf("tan(45 degrees) is %.2lf\n", tan(45 * M_PI / 180)); // Convert degrees to radians


    return 0;

}