#include <stdio.h>

int main(){
    char questions[][100]= {
        "What is the capital of France?",
        "What is 2 + 2?",
        "What is the largest mammal?"
    };
    char options[][4][50] = {
        {"A) Paris", "B) London", "C) Berlin", "D) Madrid"},
        {"A) 3", "B) 4", "C) 5", "D) 6"},
        {"A) Elephant", "B) Blue Whale", "C) Giraffe", "D) Hippopotamus"}
    };

    char answers[] = {'A', 'B', 'B'};

    char userAnswer;
    int score = 0;
    for(int i = 0; i < 3; i++){
        printf("%s\n", questions[i]);
        for(int j = 0; j < 4; j++){
            printf("%s\n", options[i][j]);
        }
        printf("Your answer: ");
        scanf(" %c", &userAnswer);
        if(userAnswer == answers[i]){
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong! The correct answer is %c.\n", answers[i]);
        }
    }
    printf("Your final score is: %d/3\n", score);

    return 0;
}