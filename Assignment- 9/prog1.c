//Write a C Program using pointer to find the bigger of two given numbers.
#include<stdio.h>
int main() {
    int num1, num2;
    int *ptr1, *ptr2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    ptr1 = &num1;
    ptr2 = &num2;
    int bigger;
    if (*ptr1 > *ptr2)
        bigger = *ptr1;
    else
        bigger = *ptr2;
    printf("The bigger number between %d and %d is %d\n", num1, num2, bigger);
    return 0;
}
