#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Нижний индекс */
    int n;

    /* Верхний индекс и значение коэффициента */
    int k = 0, C = 1;

    printf("Введите целое число: ");
    scanf("%d", &n);

    printf("|");

    /* Цикл расчёта */
    do {
        printf(" %d |", C);
        /* Считаем коэффициенты */
        C = C * (n - k) / (k + 1);
        k++;
    } while (k <= n);

    printf("\n");

    return 0;
}