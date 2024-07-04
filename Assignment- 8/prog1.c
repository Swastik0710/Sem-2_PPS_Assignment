//Write a C program to find the factorial of a number and also find the value of nCr using this function.
#include<stdio.h>
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main() {
    int n, r;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);
    int result = nCr(n, r);
    printf("The value of %dC%d is %d\n", n, r, result);
    return 0;
}
