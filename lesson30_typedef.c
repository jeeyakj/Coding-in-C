#include <stdio.h>

typedef int Number;
typedef char* String;
typedef char Initials[3];

int main(){

    //Number x=3;
    //Number y=4;
    //Number z = x + y;

    //Type aliases can make code more readable and easier to maintain. 
    //For example, if we want to change the underlying type of Number from int to float, 
    //we only need to change the typedef declaration, and the rest of the code remains unchanged.

    String name = "Alice";
    printf("Hello, %s!\n", name);




    return 0;
}