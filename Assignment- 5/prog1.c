//Write a C program to find the sum of all elements of an array.
#include<stdio.h>
int main() 
{
    int n, i, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; ++i) {
        sum += arr[i];
    }
    printf("The sum of all elements in the array is: %d\n", sum);
    return 0;
}
