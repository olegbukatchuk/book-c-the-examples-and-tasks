#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

/* Суммирование "столбиком" */
int main(void)
{
    int a, b, x, y;

    printf("Введите первое число: ");
    scanf("%d", &a);

    printf("Введите второе слово: ");
    scanf("%d", &b);

    /* Запоминаем суммирование числа */
    x = a;
    y = b;

    /* Массивы для записи бинарных кодов */
    int A[SIZE];
    int B[SIZE];
    int C[SIZE];

    /* Индексная переменная */
    int k;

    /* Заполнение массивов */
    for (k = SIZE - 1; k >= 0; k--) {
        A[k] = a % 10;
        a /= 10;

        B[k] = b % 10;
        b /= 10;

        C[k] = A[k] + B[k];
    }

    /* Уточнение значений элементов масива С */
    for (k = SIZE - 1; k >= 1; k--) {
        C[k - 1] += C[k] / 10;
        C[k] %= 10;
    }

    printf("\n ");

    /* Отображение первого массива */
    for (k = 0; k < SIZE; k++) {
        printf("| %d ", A[k]);
    }

    printf("|\n+\n ");

    /* Отображение второго массива */
    for (k = 0; k < SIZE; k++)
        printf("| %d ", B[k]);

    printf("|\n ");
    printf("---------------------\n");

    /* Отображение третьего массива */
    for (k = 0; k < SIZE; k++)
        printf("| %d ", C[k]);

    printf("|\n");
    printf("\nПроверка результата: %d+%d=%d\n", x, y, x + y);

    return 0;
}
