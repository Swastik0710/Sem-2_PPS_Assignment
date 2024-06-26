//Write a C program to check whether a number is Strong number or not.
#include <stdio.h>
int main() 
{
    int num, originalNumber, remainder, sum = 0;
    int i, fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNumber = num;
    while (num > 0) {
        remainder = num % 10;
        fact = 1;
        for (i = 1; i <= remainder; i++) {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }
    if (sum == originalNumber) {
        printf("%d is a Strong number.\n", originalNumber);
    } else {
        printf("%d is not a Strong number.\n", originalNumber);
    }
    return 0;
}