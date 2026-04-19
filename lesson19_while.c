#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

    //while (1==1){
    //    printf("This will run infinitely!\n");
    //}

    int number = 0;
    while (number<=0){
        printf("Enter a positive number: ");
        scanf("%d", &number);
    }

    do{
        printf("Enter a positive number: ");
        scanf("%d", &number);
    }while (number<=0);


    char name[50]="";
    printf("Enter your name: \n");
        fgets(name, sizeof(name), stdin);
        name[strlen(name)-1] = '\0';

    while (strlen(name)==0) {
        printf("Name cannot be empty. Please enter your name: \n");
        fgets(name, sizeof(name), stdin);
        name[strlen(name)-1] = '\0'; //remove the new line character at the end of the string
    }

    printf("Hello, %s!\n", name);



    bool isRunning = true;
    while (isRunning){
        printf("You are playing a game!\n");
        printf("Do you want to continue? (y/n): ");
        char choice;
        scanf(" %c", &choice);
        if (choice == 'n' || choice == 'N'){
            isRunning = false;
        }
    }   
    printf("you have exited the game.\n");


    return 0;
}
