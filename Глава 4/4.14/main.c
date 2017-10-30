#include <stdio.h>
#include <stdlib.h>

/*
 * Функция для вычисления суммы нечётных чисел (используется рекурсия)
 */
int mysum(int n)
{
    if (n == 1)
        return 1;
    else
        return 2 * n - 1 + mysum(n - 1); /* Рекурсивный вызов функции */
}

int main(void)
{
    /* Количество слагаемых в сумме */
    int n = 10;

    /* Вычисление суммы */
    printf("Сумма %d-ти нечётных чисел равна %d\n",n,mysum(10));

    return 0;
}