//Write a C program to count total number of vowels and consonants in a string.
#include <stdio.h>
int main() 
{
    char str[100];
    int v = 0, c = 0, i = 0;
    printf("Enter a string: ");
    gets(str);
    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                v++;
            } else {
                c++;
            }
        }
        i++;
    }
    printf("Total vowel(s) in the string: %d\n", v);
    printf("Total consonant(s) in the string: %d\n", c);
    return 0;
}
