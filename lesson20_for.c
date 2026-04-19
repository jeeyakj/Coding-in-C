#include <stdio.h>
#include <windows.h>

int main(){

    for (int i=0; i<5; i++){
        printf("This will run 5 times! i = %d\n", i);
    }

    for (int i=10; i>0; i--){
        printf("Countdown: %d\n", i);
        Sleep(1000); //sleep for 1 second
    }
    printf("Liftoff!\n");

    for (int i=0; i<=100; i+=10){
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}