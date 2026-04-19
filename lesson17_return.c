#include <stdio.h>
#include <stdbool.h>

int square (int num){
    return num*num;
}

bool ageCheck(int age){
    if (age >= 18){
        return true;
    } else {
        return false;
    }
}

int main(){

    int x = square(2);
    int y = square(3);
    int z = square(4);

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    ageCheck(17) ? printf("You are old enough to vote!\n") : printf("You are not old enough to vote.\n");

    return 0;
}