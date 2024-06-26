//Write a C program to print natural numbers from 1 to n and also print their sum.
#include<stdio.h>
int main() 
{
    int n, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Natural numbers from 1 to %d are:\n", n);
    for(i = 1; i <= n; ++i) {
        printf("%d ", i);
        sum += i;
    }
    printf("\nSum of natural numbers from 1 to %d is: %d\n", n, sum);
    return 0;
}
