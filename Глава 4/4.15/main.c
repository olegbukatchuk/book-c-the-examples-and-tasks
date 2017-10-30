#include <stdio.h>
#include <stdlib.h>

/*
 * Функция для вычисления числа из последовательности Фиббоначи по номеру числа
 */
int fib(int n)
{
    /* Значение первого и второго числа */
    if (n == 1 || n == 2)
        return 1;
    else
        /* Рекурентный вызов функции */
        return fib(n - 1) + fib(n - 2);
}

int main(void)
{
    int k;

    /* Отображение последовательности */
    for (k = 1; k <= 15; k++)
        printf("%d ", fib(k));

    printf("\n");

    return 0;
}

