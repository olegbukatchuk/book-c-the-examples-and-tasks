#include <stdio.h>
#include <stdlib.h>

/* Размер матриц */
#define SIZE 3

/* Умножение матриц */
int main(void) {

    /* Первая матрица */
    int A[SIZE][SIZE] = {{1, 4, 2}, {-1, 2, 0}, {1, -3, 1}};

    /* Вторая матрица */
    int B[SIZE][SIZE] = {{2, -1, 3}, {1, 4, 1}, {-1, 1, 0}};

    /* Матрица-результат */
    int C[SIZE][SIZE];

    /* Индексные перменные */
    int i, j, k;

    /* Вычисление результата */
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            /* Начальное нулевое значение для элемента матрицы */
            C[i][j] = 0;

            /* Вычисление значения элемента */
            for (k = 0; k < SIZE; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }

    printf("Матрица A:\n");

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++)
            printf("%3d ", A[i][j]);

        printf("\n");
    }

    printf("Матрица B:\n");

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++)
            printf("%3d ", B[i][j]);

        printf("\n");
    }

    printf("Матрица C=AB:\n");

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++)
            printf("%3d ", C[i][j]);

        printf("\n");
    }

    return 0;
}