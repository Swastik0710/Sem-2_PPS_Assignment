//Write a C program to insert and delete an element from the any position of an array.
#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE],size,pos,element,i;
    printf("Enter the size of array: ");
    scanf("%i",&size);
    printf("Enter %d elements: \n",size);
    for(i = 0 ; i < size ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter position and element to insert: ");
    scanf("%i %i",&pos,&element);
    for(i = size ; i >= pos ; i--)
        arr[i] = arr[i-1];
        arr[pos-1] = element;
        size++;
    printf("Enter position to delete: ");
    scanf("%i",&pos);
    for(i = pos-1 ; i < size-1 ; i++)
    arr[i] = arr[i+1];
    size--;
    for(i = 0 ; i < size ; i++)
    printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
