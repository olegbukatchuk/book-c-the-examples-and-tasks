#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Размер массива */
    const int n = 12;

    /* Инициализация массива */
    int pwr[n];

    /* Значение первого элемента в массиве */
    pwr[0] = 1;

    printf("| %d |", pwr[0]);

    /* Индексная переменная */
    int k = 1;

    while (k < n) {
        /* Значение элемента массива */
        pwr[k] = pwr[k - 1] * 2;
        printf(" %d |", pwr[k]);
        k++;
    }

    printf("\n");

    return 0;
}