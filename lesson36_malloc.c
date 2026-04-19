#include <stdio.h>
#include <stdlib.h>

int main(){
    //malloc
    //malloc is used to allocate memory dynamically at runtime. It returns a pointer to the allocated memory.
    //The syntax for malloc is: void* malloc(size_t size);
    //Example:
    int number = 0;
    printf("Enter the number of grades: ");
    scanf("%d", &number);

    char* grades = malloc(number * sizeof(char));


    if (grades == NULL) {
        printf("Memory allocation failed\n");
        return 1;//exit code
    }

    for (int i = 0; i < number; i++) {
        printf("Enter grade %d: ", i + 1);
        scanf(" %c", &grades[i]); // Note the space before %c to consume any leftover newline character
    }

    for (int i = 0; i < number; i++) {
        printf("Grade %d: %c\n", i + 1, grades[i]);
    }

    free(grades); // Don't forget to free the allocated memory after use
    grades = NULL; // Set the pointer to NULL after freeing the memory, avoids dangling pointer issues


    return 0;
}