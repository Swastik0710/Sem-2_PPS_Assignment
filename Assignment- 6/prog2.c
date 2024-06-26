#include <stdio.h>

int main() {
    int mat1[2][2], mat2[2][2], result[2][2];

    printf("Enter the elements of the first matrix:\n");
    scanf("%d %d %d %d", &mat1[0][0], &mat1[0][1], &mat1[1][0], &mat1[1][1]);

    printf("Enter the elements of the second matrix:\n");
    scanf("%d %d %d %d", &mat2[0][0], &mat2[0][1], &mat2[1][0], &mat2[1][1]);

    result[0][0] = mat1[0][0] * mat2[0][0] + mat1[0][1] * mat2[1][0];
    result[0][1] = mat1[0][0] * mat2[0][1] + mat1[0][1] * mat2[1][1];
    result[1][0] = mat1[1][0] * mat2[0][0] + mat1[1][1] * mat2[1][0];
    result[1][1] = mat1[1][0] * mat2[0][1] + mat1[1][1] * mat2[1][1];

    printf("Product of matrices:\n");
    printf("%d %d\n%d %d\n", result[0][0], result[0][1], result[1][0], result[1][1]);

    return 0;
}
