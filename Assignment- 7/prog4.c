//Write a C program to find reverse of a string.
#include<stdio.h>
int main() 
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = 0;
    while(str[length] != '\0') {
        length++;
    }
    printf("Reverse of the string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
