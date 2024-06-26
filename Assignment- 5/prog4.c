//Write a C program to sort the all elements of an array in ascending order using selection sort technique.
#include<stdio.h>
int main() 
{
    int n, i, j, min_idx, temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n-1; ++i) {
        min_idx = i;
        for(j = i+1; j < n; ++j) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    printf("Sorted array in ascending order: ");
    for(i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
