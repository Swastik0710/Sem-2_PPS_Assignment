//Write a C Program to count the frequency of array elements in a 1-D array.
#include<stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n], freq[n];
    printf("Enter %d elements in the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }
    printf("Element | Frequency\n");
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d\t  | %d\n", arr[i], freq[i]);
        }
    }
    return 0;
}
