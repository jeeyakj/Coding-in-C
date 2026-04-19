#include <stdio.h>

typedef enum{SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY} Day;

int main(){

    //enum is a user-defined type that consists of a set of named integer constants.
    //syntax: enum enum_name {constant1, constant2, ...};
    Day today = WEDNESDAY;
    printf("Today is: %d\n", today); //Output: Today is: 3

    if(today==SUNDAY || today==SATURDAY){
        printf("It's the weekend!\n");
    } else {
        printf("It's a weekday.\n");
    }



    return 0;
}