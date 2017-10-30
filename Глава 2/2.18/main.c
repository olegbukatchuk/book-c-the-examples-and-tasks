#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Количество слагаемых */
    int n;

    /* Считываем значения */
    printf("Сколько слагаемых в сумме? ");
    scanf("%d", &n);

    printf("Сумма %d нечётных чисел равна ", n);

    /* Запись суммы */
    int s = 0;

    do {
        s += 2 * n - 1;
        n--;
    } while (n);

    printf("%d\n", s);

    return 0;
}