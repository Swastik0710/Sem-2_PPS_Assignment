//Write a C program to check whether a number is Prime number or not.
#include<stdio.h>
int main()
{
    int i,n,isPrime = 1;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n <= 1){
        isPrime = 0;
    }
    else
    {
        for(i = 2 ; i*i <= n ; i++){
            if(n % i == 0){
                isPrime = 0;
                break;
            }
        }
    }
    if(isPrime){
        printf("%d is a prime number.",n);
    }
    else{
        printf("%d is not a prime number.",n);
    }
    return 0;
}