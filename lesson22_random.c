#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int min= 50, max=100;

    int randomNum = rand() % (max - min + 1) + min;
    int randomNum2 = rand() % (max - min + 1) + min;
    int randomNum3 = rand() % (max - min + 1) + min;

    printf("%d\n", randomNum);
    printf("%d\n", randomNum2);
    printf("%d\n", randomNum3);

    return 0;
}