#include <stdio.h>
#include <stdlib.h>

/*
 * Статическая локальная переменная
 * Функция со статической локальной переменной
 */
int counter(void)
{
    /* Локальная статическая переменная */
    static int count = 0;

    /* Увеличение значения локальной переменной */
    count++;

    /* Результат функции */
    return count;
}

int main(void)
{
    /* Индексная переменная */
    int k;

    /* Оператор цикла с вызовом функции counter() */
    for (k = 1; k <= 10; k++)
        printf("%d ", counter());

    printf("\n");

    return 0;
}