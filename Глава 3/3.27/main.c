#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

/* Строки массива созда/тся на основе анонимных массивов */
int main(void)
{
    /* Индексные переменные */
    int i, j;

    /* Массив указателей */
    int* nums[SIZE];

    /* Массив определяющий размеры строк */
    int cols[SIZE]={4, 3, 5};

    /* Заполнение массива указателей с использованием анонимных массивов */
    nums[0] = (int[]){1, 2, 3, 4};
    nums[1] = (int[]){5, 6, 7};
    nums[2] = (int[]){8, 9, 10, 11, 12};

    /* Отображение элементов массива */
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < cols[i]; j++)
            printf("%3d ", nums[i][j]);

        printf("\n");
    }

    return 0;
}