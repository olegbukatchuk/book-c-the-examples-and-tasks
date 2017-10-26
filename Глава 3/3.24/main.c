//
// Created by Oleg Bukatchuk on 26/10/2017.
//

// Альтернативный способ создания двумерного массива динамического массива
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Размеры массива
    int m=3,n=5;

    // Указатель на массив
    int (*p)[n];
    p=malloc(m*n*sizeof(int));

    // Индексные переменные и переменная счётчик
    int i,j,count=0;

    // Заполнение массива и отображение значений элементов
    for (i=0;i<m;i++) {

        for (j=0;j<n;j++) {

            count++;

            // Присваивание значения элементу
            p[i][j]= count;

            printf("%3d ",p[i][j]);

        }

        printf("\n");

    }

    // Освобождение памяти
    free(p);

    return 0;

}