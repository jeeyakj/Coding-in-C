#include <stdio.h>
#include <stdbool.h>

int main(){

    int age=25;
    int year=2026;
    int quantity=10;

    printf("You are %d years old. \n", age);
    printf("The year is %d. \n", year);
    printf("You have ordered %d pizzas. \n", quantity);


    float gpa=2.5;
    float price = 19.99;
    float temperature =-10.1;

    printf("Your GPA is %.1f\n", gpa);
    printf("The price is £%.2f\n", price);
    printf("The temperature is %.1f degrees Celsius\n", temperature);


    double pi=3.14159265358979323846;
    double e=2.71828182845904523536;

    printf("The value of pi is %.15lf\n", pi);
    printf("The value of e is %.15lf\n", e);

    

    char grade='A';
    char initial='J';
    char currency='$';

    printf("Your grade is %c\n", grade);
    printf("Your initial is %c\n", initial);
    printf("The currency symbol is %c\n", currency);

    

    char name[]="Jeeya";
    char city[]="London";
    char email[] = "jeeyakj@outlook.com";

    printf("My name is %s and I live in %s.\n", name, city);
    printf("your email is %s\n", email);

    

    bool isOnline = false; // 0 (false)
    bool isStudent=true;
    bool forSale=false;

    printf("%d\n", isOnline); // Output: 1 (true)

    if(isOnline){
        printf("you are online!\n");
    } else{
        printf("you are offline\n");
    }

    if(isStudent){
        printf("you are a student!\n");
    } else{
        printf("you are not a student\n");
    }

    if(forSale){
        printf("this item is for sale!\n");
    } else{
        printf("this item is not for sale\n");
    }



    return 0;
}