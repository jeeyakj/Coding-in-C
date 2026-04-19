#include <stdio.h>
#include <stdlib.h>

int main(){
    //calloc
    //calloc is used to allocate memory dynamically at runtime. It returns a pointer to the allocated memory. The difference between malloc and calloc is that calloc initializes the allocated memory to zero.
    //The syntax for calloc is: void* calloc(size_t num, size_t size);
    //Example:

    int number = 0;
    printf("Enter the number of players: ");
    scanf("%d", &number);

    int* scores = calloc(number, sizeof(int));

    

    if(scores == NULL) {
        printf("Memory allocation failed\n");
        return 1;//exit code
    }

     for (int i = 0; i < number; i++) {
        printf("Enter score for player %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < number; i++) {
        printf("Score for player %d: %d\n", i + 1, scores[i]);
    }

    free(scores);
    scores=NULL;



    return 0;
}