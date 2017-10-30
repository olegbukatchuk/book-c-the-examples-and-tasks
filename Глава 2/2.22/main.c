#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Количество слагаемых */
    int n = 10;

    /* Индексная переменная и переменная для записи суммы */
    int k = 1, s = 0;

    for (;;) {
        s += 2 * k - 1;
        k++;

        if (k>n) break;
    }

    printf("Сумма %d не чётных чисел равна %d\n", n, s);

    return 0;
}