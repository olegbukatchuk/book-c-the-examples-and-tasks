#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 4

/* Инициализация двумерного массива */
int main(void)
{
    /* Создание и инициализация двумерного массива */
    int nums[ROWS][COLS] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    /* Индексные переменные */
    int i, j;

    /* Отображение значений элементов массива */
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++)
            printf("%3d ", nums[i][j]);
    }

    printf("\n");

    return 0;
}