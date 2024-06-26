/*Write a very short C program to find the value of following series:
y=1+(1/2)+(1/3)+...+(1/n) where n is user input.*/
#include<stdio.h>
int main() 
{
    int n, i;
    double y = 0.0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i = 1; i <= n; ++i) {
        y += 1.0 / i;
    }
    printf("The value of the series y = 1 + 1/2 + 1/3 + ... + 1/%d is: %lf\n", n, y);
    return 0;
}
