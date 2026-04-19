#include <stdio.h>
#include <stdlib.h>

int main(){

    //realloc
    //realloc is used to resize a previously allocated memory block. It takes a pointer to the previously allocated memory and the new size as arguments. If the new size is larger than the old size, realloc may move the memory block to a new location to accommodate the new size.
    //The syntax for realloc is: void* realloc(void* ptr, size_t new_size);
    //Example:  

    int number = 0;
    printf("enter the number of prices: ");
    scanf("%d", &number);

    float* prices = malloc(number*sizeof(float));

    if (prices == NULL) {
        printf("Memory allocation failed\n");
        return 1;//exit code
    }
    for (int i = 0; i < number; i++) {
        printf("Enter price %d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    int newNumber = 0;
    printf("Enter the new number of prices: ");
    scanf("%d", &newNumber);

    float* temp = realloc(prices, newNumber * sizeof(float));
     if (temp == NULL) {
        printf("Memory reallocation failed\n");
     }else {
        prices = temp; //makes prices point to the new memory block allocated by realloc
        temp=NULL;// Update the pointer to the new memory block if reallocation is successful

        for (int i = number; i < newNumber; i++)// Start from number to avoid overwriting existing prices
        {
            printf("Enter price %d: ", i + 1);
            scanf("%f", &prices[i]);
        }
    }


    for (int i = 0; i < newNumber; i++) {
        printf("Price %d: %.2f\n", i + 1, prices[i]);
    }


    free(prices);
    prices = NULL;


    return 0;
}