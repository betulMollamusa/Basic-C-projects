#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void matrixMultiplication(int [][100], int [][100], int [][100], int , int , int , int );

int main() {
    int row1, col1, row2, col2;

    printf("1. matrisin boyutlarýný girin (örn. satýr sütun): ");
    scanf("%d %d", &row1, &col1);

    printf("2. matrisin boyutlarýný girin (örn. satýr sütun): ");
    scanf("%d %d", &row2, &col2);

    if (col1 != row2) {
        printf("Matrislerin boyutlarý uyumsuz. Çarpým yapýlamaz.\n");
        return 0;
    }

    int A[100][100];
    int B[100][100];
    int result[100][100];

    printf("1. matrisin elemanlarýný girin:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("2. matrisin elemanlarýný girin:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    matrixMultiplication(A, B, result, row1, col1, row2, col2);

    printf("Çarpým sonucu:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}


void matrixMultiplication(int A[][100], int B[][100], int result[][100], int row1, int col1, int row2, int col2) {
    if (col1 != row2) {
        printf("Matrislerin boyutlarý uyumsuz. Çarpým yapýlamaz.\n");
        return;
    }

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

