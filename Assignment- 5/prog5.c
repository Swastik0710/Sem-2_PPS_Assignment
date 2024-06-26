//Write a C program to search the any elements from an array using linear search technique.
#include<stdio.h>
int main()
{
    int size,key;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    printf("\nEnter %d elements: \n",size);
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d",&key);
    int found = 0;
    for(int i = 0 ; i < size ; i++){
        if(array[i] == key){
        printf("Element found at index %d.\n",i);
        found = 1;
        break;
        }
    }
    if(!found){
        printf("Element not found in the array.\n");
    }
    return 0;
}