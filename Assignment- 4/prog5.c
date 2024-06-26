/*Write a C program to print the following pascal triangle

        1
     1     1
  1     2     1
1    3    3    1 (Up to n numbers of row)*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i = 1 ; i <= n ; i++){
        for(j = 0 ; j < n - i ; j++){
            printf("  ");
        }
        int c = 1;
        for(int k = 1 ; k <= i ; k++){
            printf("%d    ",c);
            c = c*(i-k)/k;
        }
        printf("\n");
    }
    return 0;
}