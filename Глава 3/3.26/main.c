#include <stdio.h>
#include <stdlib.h>

/* Анонимный двумерный массив */
int main(void)
{
    /* Индексные переменные */
    int i, j;

    /* Указатель на массив */
    int (*nums)[3];

    /* Присваивание значений указателю */
    nums = (int[2][3]){{1, 2, 3},{4, 5, 6}};

    printf("Первый массив:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", nums[i][j]);

        printf("\n");
    }

    printf("Второй массив:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", (int[][3]){{1, 0, 0}, {0, 1, 0}, 0, 0, 1}[i][j]);

        printf("\n");
    }

    return 0;
}