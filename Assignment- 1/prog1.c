//Write a C program to enter two numbers and find their sum.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("\nEnter the second number: ");
    scanf("%d",&num2);
    int sum = num1 + num2;
    printf("\nThe sum of %d and %d is %d.\n",num1,num2,sum);
    return 0;
}
