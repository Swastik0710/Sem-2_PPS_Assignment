//Write a C program to find power of any number using recursive function.
#include<stdio.h>
int power(int base, int exp) {
    if (exp == 0)
        return 1;
    else
        return base * power(base, exp - 1);
}
int main() {
    int base, exp;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);
    int result = power(base, exp);
    printf("%d^%d = %d\n", base, exp, result);
    return 0;
}
