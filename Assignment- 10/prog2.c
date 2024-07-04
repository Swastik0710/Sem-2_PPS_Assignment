//Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 2.
#include<stdio.h>
#define MAX_STUDENTS 15
struct Student {
    int rollNumber;
    char name[50];
    int age;
};
int main() {
    struct Student students[MAX_STUDENTS];
    printf("Enter details for %d students:\n", MAX_STUDENTS);
    for (int i = 0; i < MAX_STUDENTS; i++) {
        students[i].rollNumber = i + 1; 
        printf("\nStudent %d:\n", i + 1);
        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Enter Age: ");
        scanf("%d", &students[i].age);
    }
    printf("\nDetails of Student with Roll Number 2:\n");
    printf("Roll Number: %d\n", students[1].rollNumber);
    printf("Name: %s\n", students[1].name);
    printf("Age: %d\n", students[1].age);
    return 0;
}
