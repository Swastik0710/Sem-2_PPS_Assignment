//Write a program to store and print the roll no., name, age and marks of a student using structures.
#include<stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    int age;
    float marks;
};
int main() {
    struct Student student;
    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNumber);
    printf("Enter Name: ");
    scanf(" %[^\n]", student.name);
    printf("Enter Age: ");
    scanf("%d", &student.age);
    printf("Enter Marks: ");
    scanf("%f", &student.marks);
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Marks: %.2f\n", student.marks);
    return 0;
}
