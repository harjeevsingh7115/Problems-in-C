#include <stdio.h>

void matrixMultiplication(int *a, int *b, int *c, int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            *(c + i * c2 + j) = 0;
            for (int k = 0; k < c1; k++) {
                *(c + i * c2 + j) += *(a + i * c1 + k) * *(b + k * c2 + j);
            }
        }
    }
}

int main() {
    int r1, c1, r2, c2;

    printf("Enter dimensions of first matrix (rows columns): ");
    scanf("%d %d", &r1, &c1);

    printf("Enter dimensions of second matrix (rows columns): ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    int a[r1][c1], b[r2][c2], c[r1][c2];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    matrixMultiplication((int *)a, (int *)b, (int *)c, r1, c1, c2);

    printf("Resultant matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
