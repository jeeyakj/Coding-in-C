#include <stdio.h>

int main(){

    //ternary operator syntax: condition ? expression_if_true : expression_if_false;
    int a = 10, b = 20;
    int max = (a > b) ? a : b; //if a is greater than b, max will be a, otherwise it will be b
    printf("The maximum of %d and %d is: %d\n", a, b, max);



    return 0;
}