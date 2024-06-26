#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main() {
    int mat1[MAX_ROWS][MAX_COLS], mat2[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];
    int M, N;

    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &M, &N);

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("Sum of matrices:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
