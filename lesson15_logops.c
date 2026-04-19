#include <stdio.h>

int main(){

    //logical operators

    int a = 5, b = 10, c = 15;

    // AND operator (&&)
    if (a < b && b < c) {
        printf("Both conditions are true: a < b AND b < c\n");
    } else {
        printf("At least one condition is false: a < b AND b < c\n");
    }

    // OR operator (||)
    if (a > b || b < c) {
        printf("At least one condition is true: a > b OR b < c\n");
    } else {
        printf("Both conditions are false: a > b OR b < c\n");
    }

    // NOT operator (!)
    if (!(a > b)) {
        printf("Condition is false: NOT (a > b)\n");
    } else {
        printf("Condition is true: NOT (a > b)\n");
    }

    return 0;
}