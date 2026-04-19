#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    /*
    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age>=18){
        printf("You are an adult\n");
    }else if(age<0){
        printf("You are not born yet\n");
    }else{
        printf("You are a child\n");
    }
    

    bool isRaining = false;
    if(isRaining){
        printf("Take an umbrella\n");
    }else{
        printf("Enjoy the sunshine\n");
    }

    */

    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0'; // Remove the newline character added by fgets
    
    if(strlen(name)==0){
        printf("You didn't enter a name\n");
    }else{
        printf("Hello, %s", name);

    }


    return 0;
}