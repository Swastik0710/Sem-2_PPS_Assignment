//Write a C program to check whether a number is palindrome or not.
#include<stdio.h>
int main()
{
    int number,reversednumber = 0,originalnumber,remainder;
    printf("Enter a number: ");
    scanf("%d",&number);
    originalnumber = number;
    while(number != 0){
        remainder = number % 10;
        reversednumber = reversednumber*10 + remainder;
        number /= 10;
    }
    if(originalnumber == reversednumber){
        printf("\nThe number is palindrome.\n");
    }
    else{
        printf("The number is not a palindrome.\n");
    }
    return 0;
}
