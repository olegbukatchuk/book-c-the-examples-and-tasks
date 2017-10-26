//
// Created by Oleg Bukatchuk on 26/10/2017.
//

// Матрица с единицами на дагонялях
#include <stdio.h>
#include <stdlib.h>

// Размер матрицы
#define SIZE 5

int main(void) {

    // Двумерный массив
    int A[SIZE][SIZE];

    // Индексные переменные
    int i,j;

    // Запонение массива и отображение результата
    for (i=0;i<SIZE;i++) {

        for (j=0;j<SIZE;j++) {

            // Присваивание значения элемента
            A[i][j]=(i==j)||(i==(SIZE-1-j));

            // Отображение значения элемента
            printf("%d ",A[i][j]);

        }

        printf("\n");

    }

    return 0;

}