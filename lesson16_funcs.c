#include <stdio.h>
#include <string.h>

void happy_birthday(char name[], int age){
        printf("Happy Birthday to you!\n");
        printf("Happy Birthday to you!\n");
        printf("Happy Birthday dear %s!\n", name);
        printf("Happy Birthday to you!\n");
        printf("You are now %d years old!\n", age);
    };

int main(){
    char name[50];
    int age;

    printf("Enter your name: \n");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0'; //remove newline character
    
    printf("Enter your age: \n");
    scanf("%d", &age);

    //function call
    happy_birthday(name, age);
    happy_birthday(name, age);
    happy_birthday(name, age);



    return 0;
}
