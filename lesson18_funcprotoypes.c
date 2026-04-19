#include <stdio.h>
#include <stdbool.h>

void hello(char name[]);
bool ageCheck(int age);



int main(){
    hello("Alice");
    hello("Bob");
    hello("Charlie");

    if (ageCheck(17)){
        printf("You are old enough to vote!\n");
    } else {
        printf("You are not old enough to vote.\n");
    }


    return 0;
}

void hello(char name[]){
    printf("Hello %s!\n", name);
    printf("Welcome to C programming!\n");
}

bool ageCheck(int age){
    if (age >= 18){
        return true;
    } else {
        return false;
    }
}
