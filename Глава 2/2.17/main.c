#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Количество слагаемых */
    int n;

    /* Считывание значения для количества слагаемых */
    printf("Сколько слагаемых в сумме? ");
    scanf("%d", &n);

    /* k - индекс, s - сумма */
    int k = 0, s = 0;

    do {
        k++;
        s += 2 * k - 1;
    } while (k < n);

    printf("Сумма %d нечётных чисел равна %d\n", s, n);

    return 0;
}
