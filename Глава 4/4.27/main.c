#include <stdio.h>
#include <stdlib.h>

/* Размер матриц */
#define SIZE 3

/* Функция для копирования матриц */
void mCopy(double A[][SIZE], double B[][SIZE])
{
    int i,j;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++)
            A[i][j] = B[i][j];
    }
}

/* Функция для вычисления произведения матриц */
void mProd(double A[][SIZE], double B[][SIZE], double R[][SIZE])
{
    /* Локальная матрица */
    double C[SIZE][SIZE];

    /* Индексные переменные */
    int i,j,k;

    /* Вычисление произведения матриц */
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            C[i][j] = 0;

            for (k = 0; k < SIZE; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }

    /* Копирование матриц */
    mCopy(R, C);
}

/* Функция для создания единичной матрицы */
void mUnit(double R[][SIZE])
{
    int i,j;

    /* Заполнение матрицы */
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            R[i][j] = (i == j) ? 1 : 0;
        }
    }
}

/* Умножение матрицы на число */
void nProd(double A[][SIZE], double x, double R[][SIZE])
{
    /* Локальная матрица */
    double C[SIZE][SIZE];

    int i,j;

    /* Вычисление результата */
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++)
            C[i][j] = x * A[i][j];
    }

    /* Копирование матриц */
    mCopy(R, C);
}

/* Вычисление суммы двух матриц */
void mSum(double A[][SIZE], double B[][SIZE], double R[][SIZE])
{
    /* Локальная матрица */
    double C[SIZE][SIZE];

    int i,j;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++)
            C[i][j] = A[i][j] + B[i][j];
    }

    mCopy(R, C);
}

/* Вычисление матричной экспоненты */
void mExp(double A[][SIZE], double R[][SIZE])
{
    /* Локальная матрица для записи значения сумму ряда */
    double S[SIZE][SIZE];

    /* Локальная матрица для записи добавки к ряду */
    double Q[SIZE][SIZE];

    /* Начальные значения */
    mUnit(S);
    mCopy(Q, A);

    /* Верхние границы ряда */
    int n = 100;

    int k;

    /* Вычисление матричного ряда */
    for (k = 1; k <= n; k++) {
        mSum(S, Q, S);

        /* Новая добавка */
        mProd(Q, A, Q);
        nProd(Q, (double) 1 / (k + 1), Q);
    }

    /* Копирование матриц */
    mCopy(R, S);
}

/* Функция для отображения матрицы */
void show(double A[][SIZE])
{
    int i,j;

    /* Отображение значений элементов матрицы */
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++)
            printf("%f ", A[i][j]);

        printf("\n");
    }
}

int main(void)
{
    /* Исходная матрица */
    double A[SIZE][SIZE] = {{2, 1, 0},{0, 2, 1},{0, 0, 2}};

    /* Матрица для записиматричной экспоненты */
    double B[SIZE][SIZE];

    printf("Матрица A:\n");

    show(A);

    /* Вычисление матричной экспоненты */
    mExp(A, B);

    printf("Матрица exp(A):\n");

    show(B);

    return 0;
}
