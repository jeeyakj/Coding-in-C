#include <stdio.h>
#include <stdbool.h>
#include <string.h>



typedef struct{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
} Student;

void printStudent(Student s);

int main(){

    Student student1 = {"Alice", 20, 3.5, true};
    Student student2 = {0};

    strncpy(student2.name, "Bob", sizeof(student2.name)-1);
    student2.age = 22;
    student2.gpa = 3.8;
    student2.isFullTime = false;

    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2f\n", student1.gpa);
    printf("Is Full Time: %s\n", student1.isFullTime ? "Yes" : "No");
    printf("\n");

    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("GPA: %.2f\n", student2.gpa);
    printf("Is Full Time: %s\n", student2.isFullTime ? "Yes" : "No");

    printStudent(student1);
    printStudent(student2);




    return 0;
}

void printStudent(Student s){
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("GPA: %.2f\n", s.gpa);
    printf("Is Full Time: %s\n", s.isFullTime ? "Yes" : "No");
    printf("\n");
}