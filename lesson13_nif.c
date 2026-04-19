#include <stdio.h>
#include <stdbool.h>

int main(){

    //nested if-else
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("%d is greater than %d\n", num1, num2);
    } else if (num1 < num2) {
        printf("%d is greater than %d\n", num2, num1);
    } else {
        printf("Both numbers are equal.\n");
    }

    //nested if-else with boolean
    bool isEven1 = (num1 % 2 == 0);
    bool isEven2 = (num2 % 2 == 0);
    
    if (isEven1 && isEven2) {
        printf("Both numbers are even.\n");
    } else if (!isEven1 && !isEven2) {
        printf("Both numbers are odd.\n");
    } else {
        printf("One number is even and the other is odd.\n");
    }

    float price = 10.00;
    bool isStudent = true;
    bool isSenior = true;

    if (isStudent){
        if (isSenior){
            price *= 0.5; // 50% discount for students who are also seniors
        } else {
            price *= 0.8; // 20% discount for students
        }
    }
    else{
        if (isSenior){
            price *= 0.7; // 30% discount for seniors
        }
    }
    printf("Final price: $%.2f\n", price);

    return 0;
}
