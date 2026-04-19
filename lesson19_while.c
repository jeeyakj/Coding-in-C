#include <stdio.h>

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
}
