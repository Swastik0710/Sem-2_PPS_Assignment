//Write a C program to calculate the value of x using:
#include <stdio.h>
#include<math.h>
int main() {
    float x, y, result;

    // Input values for x and y
    printf("Enter values for x and y: ");
    scanf("%f %f", &x, &y);

    // Calculate using if-else-if
    if (y < 1) {
        result = 1 + (pow(x,2));
    } else if (y == 1) {
        result = 1 + x / y;
    } else if (y == 2) {
        result = 1 + 2 * x / y;
    } else if (y == 3) {
        result = 1 + 3 * x / y;
    } else {
        result = 1 + x / y;
    }

    printf("Result using if-else-if: %.2f\n", result);

    return 0;
}
