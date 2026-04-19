#include <stdio.h>

void birthday(int* age);
int main(){
    //pointers are variables that store memory addresses. 
    //They allow us to indirectly access and manipulate data in memory.
    //syntax: data_type* pointer_name;
    //The * operator is used to declare a pointer variable and to dereference a pointer to access the value stored at the memory address it points to.
    //Example:
    int x = 10;
    int* ptr = &x; //ptr is a pointer to an integer, and it stores the address of x
    printf("Value of x: %d\n", x); //Output: Value of x: 10
    printf("Address of x: %p\n", &x); //Output: Address of x: 0x7ffee3bff5ac (example address)
    printf("Value of ptr: %p\n", ptr); //Output: Value of ptr: 0x7ffee3bff5ac (same address as x)
    printf("Value pointed to by ptr: %d\n", *ptr); //Output: Value pointed to by ptr: 10

    //help to avoid memory leaks and dangling pointers by ensuring that we properly manage memory allocation and deallocation when using pointers.
    int age = 25;
    printf("%p\n", &age);
    int* pAge = &age; //pAge is a pointer to an integer, and it stores the address of age
    printf("%p\n", pAge);
    printf("Value pointed to by pAge: %d\n", *pAge); //Output: Value pointed to by pAge: 25

    birthday(pAge); //pass the address of age to the birthday function
    printf("Age after birthday: %d\n", age); //Output: Age after birthday: 26 (age is changed because it is passed by reference)

    return 0;
}
void birthday(int* age){
//pass by value means that a copy of the variable is passed to the function, so any changes made to the parameter inside the function do not affect the original variable outside the function.
//pass by reference means that a pointer to the variable is passed to the function, so any changes made to the parameter inside the function will affect the original variable outside the function.
    (*age)++; // Dereference the pointer and increment the value it points to
}