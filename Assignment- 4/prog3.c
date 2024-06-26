/*Write a C program to print the following pattern:
      1
    2 3
  3 4 5
4 5 6 7 (Up to n numbers of row.)*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i = 1 ; i <= n ; i++){
        for(j = 1 ; j <= n - i ; j++){
            printf("  ");
        }
        for(j = 0 ; j < i ; j++){
            printf("%d ",i+j);
        }
        printf("\n");
    }
    return 0;
}