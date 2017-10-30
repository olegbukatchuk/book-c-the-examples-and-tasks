#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Количество слагаемых */
    int n = 10;

    /* Индексная переменная и переменная для записи суммы */
    int k = 1, s = 0;

    /* Метка для перехода (goto) */
    start:

    s += 2 * k - 1;
    k++;

    if (k <= n)
        goto start; /* Переход к метке (start) */

    printf("1+3+5+...+%d=%d\n", 2 * n - 1, s);

    return 0;
}