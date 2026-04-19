#include <stdio.h>

int main(){

    int numbers[] = {10, 20, 30, 40, 50};
    char grader[] = {'A', 'B', 'C', 'D', 'F', 'U'};
    numbers[0]=1000;

    printf("%d\n", numbers[0]); // Output: 10
    printf("%c\n", grader[0]); // Output: A

    for (int i = 0; i < sizeof(grader)/sizeof(grader[0]); i++){
        printf("%c ", grader[i]);
    }


    int scores[20]= {0};
    for (int i = 0; i < 2; i++){

        printf("enter a score: ");
        scanf("%d", &scores[i]);
    }
    printf("You entered the following scores:\n");
    for (int i = 0; i < 2; i++){
        printf("%d ", scores[i]);
    }


    //2D arrays
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printf("\n2D Array (Matrix):\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }




    return 0;
}