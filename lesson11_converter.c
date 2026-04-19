#include <stdio.h>


int main(){
    int choice = 0;
    float pounds = 0.0;
    float kilograms = 0.0;

    printf("Weight conversion calculator\n");
    printf("1. Pounds to Kilograms\n");
    printf("2. Kilograms to Pounds\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter weight in pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds * 0.453592;
        printf("%.2f pounds is equal to %.2f kilograms\n", pounds, kilograms);

    }else if(choice == 2){
        printf("Enter weight in kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms / 0.453592;
        printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, pounds);
    }else{
        printf("Invalid choice\n");
        
    }

    //can also do for temperature conversion, length conversion, etc.
    return 0;

}