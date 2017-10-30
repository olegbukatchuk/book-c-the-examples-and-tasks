#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    /* Аргументы для экспоненты */
    double x = 1;

    /* Переменная для записи суммы и добавки к сумме */
    double s = 0, q = 1;

    /* Индексная переменная и граница суммы */
    int k, n = 8;

    for (k = 0; k <= n; k++) {
        /* Считаем сумму */
        s += q;
        q *= x / (k + 1);
    }

    printf("Вычисленное значение: exp(%.1f)=%f\n", x, s);
    printf("Констрольное значение: exp(%.1f)=%f\n", x, exp(x));

    return 0;
}