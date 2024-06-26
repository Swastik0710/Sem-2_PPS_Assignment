//Write a C program to find maximum between three numbers using logical operator and ternary operator.
//Using Logical Operator
#include <stdio.h>

int main() {
    int a, b, c, max;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find maximum using logical operators
    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }

    printf("Maximum using logical operators: %d\n", max);

    return 0;
}
//Using Ternary Operator
/*
#include <stdio.h>

int main() {
    int a, b, c, max;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find maximum using ternary operator
    max = (a >= b && a >= c) ? a : (b >= a && b >= c) ? b : c;

    printf("Maximum using ternary operator: %d\n", max);

    return 0;
}
*/