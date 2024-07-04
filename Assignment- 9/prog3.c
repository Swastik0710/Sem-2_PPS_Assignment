//Write a C program to copy one array to another using pointers.
#include <stdio.h>
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr1[size], arr2[size];
    int *ptr1 = arr1;
    int *ptr2 = arr2;
    printf("Enter %d elements for the first array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < size; i++) {
        *(ptr2 + i) = *(ptr1 + i);
    }
    printf("Elements of the second array (copied):\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}
