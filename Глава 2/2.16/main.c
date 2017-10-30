#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Количество слагаемых */
    int n;

    /* Считывание значения для количества слагаемых */
    printf("Сколько слагаемых в сумме? ");
    scanf("%d", &n);

    /* Индексная переменная и переменная для записи суммы */
    int k = 1, s = 0;

    while (1) {
        s += 2 * k - 1;
        k++;

        if (k > n) break;
    }

    printf("%d\n", s);

    return 0;
}