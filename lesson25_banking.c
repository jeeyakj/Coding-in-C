#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);


int main(){
    float balance = 0.0;
    int choice = 0;
    while(choice != 4){
        printf("\nWelcome to the Banking System\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                printf("Thank you for using the Banking System. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }




    return 0;
}

void checkBalance(float balance){
    printf("Your balance is: $%.2f\n", balance);
}

float deposit(){
    float amount;
    printf("Enter the amount to deposit: $");
    scanf("%f", &amount);
    return amount;
}

float withdraw(float balance){
    float amount;
    printf("Enter the amount to withdraw: $");
    scanf("%f", &amount);
    if (amount > balance) {
        printf("Insufficient funds.\n");
        return 0;
    }
    return amount;
}