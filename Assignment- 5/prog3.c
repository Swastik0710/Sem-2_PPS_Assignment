//Write a C program to sort the all elements of an array in ascending order using bubble sort technique.
#include<stdio.h>
int main()
{
    int size,temp;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    printf("\nEnter %d elements: \n",size);
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&array[i]);
    }
    for(int i = 0 ; i < size-1 ; i++){
        for(int j = 0 ; j < size-i-1 ; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    printf("Array in ascending order: \n");
    for(int i = 0 ; i < size ; i++){
        printf("%d  ",array[i]);
    }
    return 0;
}