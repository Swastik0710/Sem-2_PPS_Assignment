//Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.
#include<stdio.h>
#define NUM_STUDENTS 5
struct Marks {
    int rollNumber;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};
int main() {
    struct Marks students[NUM_STUDENTS];
    float percentage;
    printf("Enter details and marks for %d students:\n", NUM_STUDENTS);
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name);       
        printf("Enter Chemistry Marks (out of 100): ");
        scanf("%d", &students[i].chem_marks);
        printf("Enter Mathematics Marks (out of 100): ");
        scanf("%d", &students[i].maths_marks);
        printf("Enter Physics Marks (out of 100): ");
        scanf("%d", &students[i].phy_marks);
    }
    printf("\nPercentage of each student:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        percentage = (students[i].chem_marks + students[i].maths_marks + students[i].phy_marks) / 3.0;
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Chemistry Marks: %d\n", students[i].chem_marks);
        printf("Mathematics Marks: %d\n", students[i].maths_marks);
        printf("Physics Marks: %d\n", students[i].phy_marks);
        printf("Percentage: %.2f%%\n", percentage);
    }
    return 0;
}
