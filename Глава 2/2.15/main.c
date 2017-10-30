#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Количество слагаемых */
    int n;

    /* Считываем значение элемента */
    printf("Сколько слагаемы в сумме? ");
    scanf("%d", &n);

    printf("Сумма %d нечётных чисел равна ", n);

    /* Переменные для слагаемого и записи суммы */
    int q = 0, s = 0;

    /* Вычисление суммы нечётных чисел */
    while (n) {
        q++;

        if (q % 2 == 0)
            continue;

        s += q;
        n--;
    }

    printf("%d\n",s);

    return 0;
}