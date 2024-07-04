//Define a union with the following three members: roll no, name and total marks of student. Write a c program to read and display the details of a student.
#include<stdio.h>
#include<string.h>
union StudentDetails {
    int rollNumber;
    char name[50];
    float totalMarks;
};
int main() {
    union StudentDetails student;
    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNumber);
    printf("Enter Name: ");
    scanf(" %[^\n]", student.name);
    printf("Enter Total Marks: ");
    scanf("%f", &student.totalMarks);
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Total Marks: %.2f\n", student.totalMarks);
    return 0;
}
