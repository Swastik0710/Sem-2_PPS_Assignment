//Write a C program to check whether a number is Armstrong number or not.
#include<stdio.h>
int main()
{
    int originalnumber,number,remainder,result=0;
    printf("Enter a number: ");
    scanf("%d",&number);
    originalnumber=number;
    while(originalnumber != 0){
        remainder = originalnumber % 10;
        result = result + remainder*remainder*remainder;
        originalnumber /= 10;
    }
    if(result == number){
        printf("%d is an armstrong number.",number);
    }
    else{
        printf("%d is not an armstrong number.",number);
    }
    return 0;
}