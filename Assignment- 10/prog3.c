//Write a program to store and print the roll no., name, age, address and marks of 15 students using structure.
#include<stdio.h>
#define MAX_STUDENTS 15
#define MAX_NAME_LENGTH 50
#define MAX_ADDRESS_LENGTH 100
struct Student {
    int rollNumber;
    char name[MAX_NAME_LENGTH];
    int age;
    char address[MAX_ADDRESS_LENGTH];
    float marks;
};
int main() {
    struct Student students[MAX_STUDENTS];
    printf("Enter details for %d students:\n", MAX_STUDENTS);
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Enter Age: ");
        scanf("%d", &students[i].age);
        printf("Enter Address: ");
        scanf(" %[^\n]", students[i].address);
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }
    printf("\nDetails of all students:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Address: %s\n", students[i].address);
        printf("Marks: %.2f\n", students[i].marks);
    }
    return 0;
}
