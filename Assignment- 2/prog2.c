//Write a C program to check whether a number is positive, negative or zero using switch case.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    switch((num > 0) - (num < 0))
    {
        case 1:
        printf("The number is positive.\n");
        break;
        case -1:
        printf("The number is negative.\n");
        break;
        case 0:
        printf("The number is zero.\n");
        break;
        default:
        printf("Unexpected case.\n");
    }
    return 0;
}