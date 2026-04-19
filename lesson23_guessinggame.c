#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int number, guess, attempts = 0;
    srand(time(NULL)); // Seed the random number generator
    number = rand() % 100 + 1; // Generate a random number between 1 and 100

    printf("Welcome to the Guessing Game!\n");
    printf("I have selected a number between 1 and 100. Can you guess it?\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < number) {
            printf("Too low! Try again.\n");
        } else if (guess > number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != number);

    return 0;
}