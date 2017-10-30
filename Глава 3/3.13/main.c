#include <stdio.h>
#include <stdlib.h>

// Размеры массива
#define ROWS 3
#define COLS 5

/* Создание двумерного статического массива */
int main(void)
{
    /* Создание двумерного массива */
    int nums[ROWS][COLS];

    /* Индексные переменные и переменная-счётчик */
    int i, j, count = 0;

    /* Заполнение массива и отображение значений элементов массива */
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            count++;
            /* Присваивание значения элементу */
            nums[i][j] = count;
            printf("%3d", nums[i][j]);
        }

        printf("\n");
    }

    return 0;
}