#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void determineWinner(int userChoice, int computerChoice);

int main(){

    //rock paper scissors game
    char *choices[] = {"Rock", "Paper", "Scissors"};
    int userChoice, computerChoice;
    srand(time(NULL)); // Seed the random number generator
    
    computerChoice = getComputerChoice();
    userChoice = getUserChoice();

    printf("You chose: %s\n", choices[userChoice]);
    printf("Computer chose: %s\n", choices[computerChoice]);
    determineWinner(userChoice, computerChoice);
    return 0;
}


int getComputerChoice() {
    return rand() % 3; // Generate a random choice for the computer
}

int getUserChoice() {
    int choice;
    do{
        printf("Please enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): ");
        scanf("%d", &choice);
        if(choice < 0 || choice > 2){
            printf("Invalid choice. Please try again.\n");
        }
    } while(choice < 0 || choice > 2);
    return choice;
}

void determineWinner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 0 && computerChoice == 2) ||
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}
