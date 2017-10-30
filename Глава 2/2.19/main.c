#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 10;

    int k, s = 0;

    for (k = 1; k <= n; k++)
        s += 2 * k - 1;

    printf("Сумма %d нечётных чисел равна %d\n", n, s);

    return 0;
}
