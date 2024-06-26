//Write a C program to enter two numbers and perform all arithmetic operations (+, -, *, / and %)
#include<stdio.h>
int main()
{
    float num1,num2,result;
    printf("Enter the first number: ");
    scanf("%f",&num1);
    printf("\nEnter the second number: ");
    scanf("%f",&num2);
    result = num1 + num2;
    printf("Sum of the two numbers is %.2f.\n",result);
    result = num1 - num2;
    printf("Difference of the two numbers is %.2f.\n",result);
    result = num1*num2;
    printf("Product of the two numbers is %.2f.\n",result);
    if(num2 != 0)
    {
        result = num1/num2;
        printf("Quotient after division is %.2f.\n",result);
    }
    else
    {
        printf("Error! Division by zero.\n");
    }
    if(num2 != 0)
    {
        result = (int)num1 % (int)num2;
        printf("Remainder after division is %.2f.\n",result);
    }
    else
    {
        printf("Error! Division by zero.\n");
    }
    return 0;
}