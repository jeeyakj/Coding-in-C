#include <stdio.h>

int main(){

    int age=25;
    float price=19.99;
    double pi=3.14159265358979323846;
    char currency = '$';
    char name[] = "jeeya";

    printf("%d\n", age);
    printf("%.2f\n", price);
    printf("%.15lf\n", pi);
    printf("%c\n",currency);
    printf("%s\n", name);



    int num1 = 1;
    int num2 = 10;
    int num3 = -100;

    printf("%-3d\n", num1);
    printf("%03d\n", num2);
    printf("%+3d\n", num3);


    float price1 = 19.99;
    float price2 = 1.505;
    float price3 = -100.00;

    printf("%+8.2f\n", price1);
    printf("%+8.2f\n", price2);
    printf("%+8.2f\n", price3);
}