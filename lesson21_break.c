#include <stdio.h>

int main(){

    for (int i=1; i <=10; i++){
        if (i==5){
            break; //exit the loop when i is 5
        }
        printf("%d ", i);
    }

    printf("\n");

    for (int i=1; i <=10; i++){
        if (i%2==0){
            continue; //skip the rest of the loop and move to the next iteration when i is even
        }
        printf("%d \n", i);
    }

    for (int i=1; i<=12; i++){
        for (int j=1; j<=12; j++){
            printf("%3d ", i*j);
        }
        printf("\n");
    }

    int rows= 0;
    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &rows);
    for (int i=1; i<=rows; i++){
        for (int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;


}