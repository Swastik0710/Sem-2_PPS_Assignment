//Write a C program to check whether a number is Perfect number or not.
#include<stdio.h>
int main()
{
    int num,sum = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i = 1 ; i < num ; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    if(sum == num){
        printf("%d is a perfect number.",num);
    }
    else{
        printf("%d is not a perfect number.",num);
    }
    return 0;                       
}