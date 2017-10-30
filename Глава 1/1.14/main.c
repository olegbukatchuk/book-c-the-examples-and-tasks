#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Размер массива */
    const int n = 12;

    /* Инициализируем числовой массив */
    int nums[n];

    /* Индексная переменная */
    int k;

    /* Заполняем массив и выводим значения элементов */
    for (k = 0; k < n; k++) {
        /* Считаем значение для каждого элемента массива */
        nums[k] = 2 * k + 1;
        printf("%d ", nums[k]);
    }

    printf("\n");

    return 0;
}