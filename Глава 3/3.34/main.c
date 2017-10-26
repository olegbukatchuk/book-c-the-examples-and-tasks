//
// Created by Oleg Bukatchuk on 26/10/2017.
//

// Удаление столбца матрицы
#include <stdio.h>
#include <stdlib.h>

// Размеры матрицы
#define M 3
#define N 5

int main(void) {

    // Исходная матрица
    char A[M][N]={{'A','B','C','D','E'},{'F','G','H','I','J'},{'K','L','M','N','O'}};

    // Индексные переменные
    int i,j;

    printf("Исходная матрица:\n");

    // Отображение исходной матрицы
    for (i=0;i<M;i++) {

        for (j=0;j<N;j++) {

            printf("%c ",A[i][j]);

        }

        printf("\n");

    }

    // Матрица после удаления столбца
    char B[M][N-1];

    // Номер удаляемого столбца
    int number;

    // Считывание номера удаляемого столбца
    printf("Укажите номер столбца для удаления: ");
    scanf("%d",&number);

    // Выичсление результата
    for (i=0;i<M;i++) {

        for (j=0;j<number-1;j++) {

            B[i][j]=A[i][j];

        }

        for (j=number-1;j<N-1;j++) {

            B[i][j]=A[i][j+1];

        }

    }

    printf("После удаления столбца:\n");

    // Отображение результата
    for (i=0;i<M;i++) {

        for (j=0;j<N-1;j++) {

            printf("%c ",B[i][j]);

        }

        printf("\n");

    }

    return 0;

}