//13.Write a C program to find value of sine series.
#include <stdio.h>
#include<math.h>
int main() 
{
    float i,n,f=1,x,y = 0;
    printf("Enter the number of terms and the value of x respectively: ");
    scanf("%f %f",&n,&x);
    for(i = 1 ; i <= n ; i++){
        f *= (2*i)*(2*i-1);
        y = y + pow(-1,i-1)*(pow(x,2*i-1)/f);
    }
    printf("The value of sine series is %.4f",y);
    return 0;
}