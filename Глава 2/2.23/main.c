#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Количество слагаемых */
    int n = 10;

    /* Сумма */
    int s;

    /* Вычисление суммы */
    for (s = 0; n; n--)
        s += 2 * n - 1;

    printf("%d\n", s);

    return 0;
}