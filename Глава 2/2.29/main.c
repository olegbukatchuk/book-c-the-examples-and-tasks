#include <stdio.h>
#include <stdlib.h>

/* Функция определяющая уравнение */
double f(double x)
{
    return x * x - 4 * x - 5;
}

/* Производная */
double df(double x)
{
    return 2 * x - 4;
}

int main(void)
{
    /* Переменная для записи корня */
    double x = 7;

    /* Количество итераций */
    int n = 10;

    /* Вычисление корня */
    while (n) {
        x = x - f(x) / df(x);
        n--;
    }

    printf("Решение уравнения: %f\n", x);

    return 0;
}