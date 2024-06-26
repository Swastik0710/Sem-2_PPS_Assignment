//Write a C program to swap two numbers. (with and without third variable)
//By using third variable
#include<stdio.h>
int main()
{
    int num1,num2,temp;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("\nEnter the second number: ");
    scanf("%d",&num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping:\nFirst number is %d.\nSecond number is %d.\n",num1,num2);
    return 0;
}
//Without using third variable
/*#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("\nEnter the second number: ");
    scanf("%d",&num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("After swapping:\nFirst number is %d.\nSecond number is %d.\n",num1,num2);
    return 0;
}*/