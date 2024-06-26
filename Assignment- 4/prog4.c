/*Write a C program to print digits in following pyramidal form:
      1
    2 3 2
  3 4 5 4 3
4 5 6 7 6 5 4 (Up to n numbers of row)*/
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
        for(j = i ; j <= 2*i-1 ; j++){
            printf("%d ",j);
        }
        for(j = 2*i - 2 ; j >= i ; j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}