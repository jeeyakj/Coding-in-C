#include <stdio.h>
#include <string.h>

int main(){

    char item[50]="";
    float price =0.0;
    int quantity=0;
    char currency='$';
    float total=0.0;

    printf("what item do you want to buy? ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0'; // Remove the newline character


    printf("Enter the price of the item: ");
    scanf("%f", &price);


    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    total = price * quantity;


printf("\nYou have bought %d %s(s) at a price of %.2f each. \n", quantity, item, price);
    printf("%c%.2f\n", currency, total);



    return 0;
}