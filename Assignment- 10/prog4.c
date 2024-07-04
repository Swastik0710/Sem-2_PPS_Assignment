//Write a program to add two distances in inch-feet using structure. The values of the distances is to be taken from the user.
#include<stdio.h>
struct Distance {
    int feet;
    float inch;
};
int main() {
    struct Distance d1, d2, sum;
    printf("Enter first distance:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%f", &d1.inch);
    printf("\nEnter second distance:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%f", &d2.inch);
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;
    if (sum.inch >= 12.0) {
        sum.inch -= 12.0;
        sum.feet++;
    }
    printf("\nSum of distances:\n");
    printf("Feet: %d\n", sum.feet);
    printf("Inches: %.1f\n", sum.inch);
    return 0;
}
