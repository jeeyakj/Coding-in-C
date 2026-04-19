#include <stdio.h>
#include <string.h>

int main(){

    int age = 0;
    float gpa = 0.0;
    char grade = ' ';
    char name[50] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade); // Note the space before %c to consume any leftover newline character

    getchar(); // Consume the newline character left in the input buffer after reading grade
    printf("Enter your name: ");
    // scanf(" %[^\n]", name); // This will read the entire line including spaces
    // Alternatively, you can use fgets to read the name:
    fgets(name, sizeof(name), stdin); // Note: This will read the entire line including spaces
    name[strlen(name) - 1] = '\0'; // Remove the newline character added by fgets

    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    return 0;

}