#include <stdio.h>
#include <string.h>

int main(){


    //Arrays of strings
    char fruits[][20] = {"Apple", "Banana", "Cherry", "Date", "Elderberry"};
    printf("The first fruit is: %s\n", fruits[0]); // Output: Apple

    //fruits[0][0] = 'e'; //segmentation fault because we are trying to change the first character of the string "Apple" to 'e', which is not allowed since string literals are stored in read-only memory. To fix this, we can declare the array of strings as an array of character arrays instead of an array of pointers to string literals. This way, we can modify the contents of the strings without causing a segmentation fault.
    //fruits[0][4] = 'A';
    //printf("The first fruit is now: %s\n", fruits[0]); // Output

    for (int i = 0; i < sizeof(fruits)/sizeof(fruits[0]); i++){
        printf("%s ", fruits[i]);
    }
    printf("\n");


    char names[3][25] = {0};

    printf("Enter 3 names:\n");
    for (int i = 0; i < 3; i++){
        printf("Name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i])-1] = '\0'; // Remove the newline character added by fgets
    }

    return 0;
}