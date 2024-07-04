//Write a C Program to Find Largest Number from an array. Array must be declared using Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
int findLargest(int *arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int *arr;
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    arr = (int *) malloc(size * sizeof(int));
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = findLargest(arr, size);
    printf("The largest number in the array is: %d\n", largest);
    free(arr);
    return 0;
}
