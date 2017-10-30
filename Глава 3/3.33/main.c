#include <stdio.h>
#include <stdlib.h>

/* Размер матрицы */
#define M 5
#define N 3

/* Поворот матрицы */
int main(void)
{
    /* Исходная матрица (двумерный массив) */
    int A[M][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {13, 14, 15}};

    /* Матрица-результат (двумерный массив) */
    int B[N][M];

    /* Индексные переменные */
    int i, j;

    /* Вычисление результата */
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++)
            B[N - j - 1][i] = A[i][j];
    }

    printf("Исходная матрица:\n");

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++)
            printf("%3d ", A[i][j]);

        printf("\n");
    }

    printf("После поворота:\n");

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++)
            printf("%3d ", B[i][j]);

        printf("\n");
    }

    return 0;
}