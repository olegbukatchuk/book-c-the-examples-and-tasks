#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Количество слагаемых */
    int n = 10;

    /* k - индекс, s - сумма */
    int k = 1, s = 0;

    /* Считаем сумму */
    for (; k<=n;) {
        s += 2 * k - 1;
        k++;
    }

    printf("Сумма %d нечётных чисел равна %d\n", n, s);

    return 0;
}