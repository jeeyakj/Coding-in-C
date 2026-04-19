#include <stdio.h>
#include <string.h>

int main(){

    //Mad Libs Game

    char noun[50]="";
    char verb[50]="";
    char adjective1[50]="";
    char adjective2[50]="";
    char adjective3[50]="";
    
    printf("Enter a noun: ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0'; // Remove the newline character

    printf("Enter a verb: ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0'; // Remove the newline character

    printf("Enter an adjective: ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0'; // Remove the newline character

    printf("Enter another adjective: ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0'; // Remove the newline character

    printf("Enter one more adjective: ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0'; // Remove the newline character

    //printf("%s\n", noun);
    //printf("%s\n", verb);
    //printf("%s\n", adjective1);
    //printf("%s\n", adjective2);
    //printf("%s\n", adjective3);

    printf("Once upon a time, there was a %s %s who loved to %s.\n", adjective1, noun, verb);
    printf("The %s %s was very %s and always had a %s smile on its face.\n", adjective2, noun, adjective3, adjective1);
    printf("Everyone in the town admired the %s %s for its %s personality and %s %s.\n", adjective2, noun, adjective1, adjective2, noun);
    printf("The %s %s lived happily ever after, spreading joy and %s wherever it went.\n", adjective2, noun, adjective1);
    printf("The end.\n");

    return 0;
}