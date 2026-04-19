#include <stdio.h>

typedef struct{
    char model[50];
    int year;
    float price;
} Car;

int main(){

    Car cars[]={{"Toyota Camry", 2020, 24000.00},
                {"Honda Accord", 2019, 22000.00}, 
                {"Ford Mustang", 2021, 35000.00}};

int numCars = sizeof(cars) / sizeof(cars[0]);
for (int i = 0; i < numCars; i++){
    printf("Car %d:\n", i+1);
    printf("Model: %s\n", cars[i].model);
    printf("Year: %d\n", cars[i].year);
    printf("Price: $%.2f\n", cars[i].price);
    printf("\n");
}



    return 0;

}