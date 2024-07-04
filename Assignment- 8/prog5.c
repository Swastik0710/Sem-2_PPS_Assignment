//Write a C program to find the GCD of two numbers using recursive function, and also find the GCD of three numbers using this function.
#include<stdio.h>
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int gcd_of_three(int a, int b, int c) {
    return gcd(gcd(a, b), c);
}
int main() {
    int num1, num2, num3;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    int result = gcd(num1, num2);
    printf("GCD of %d and %d is %d\n", num1, num2, result);
    printf("Enter third number: ");
    scanf("%d", &num3);
    int result_three = gcd_of_three(num1, num2, num3);
    printf("GCD of %d, %d and %d is %d\n", num1, num2, num3, result_three);
    return 0;
}
