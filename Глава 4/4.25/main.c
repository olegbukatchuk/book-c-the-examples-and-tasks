#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Функция описывает решаемое уравнение */
double F(double x)
{
    return 2 - exp(x);
}

/* Функция для решения уравнения методом касательных */
double solve(double (*f)(double), double x0, int n)
{
    /* Переменная для записи значения корня */
    double x = x0;

    /* Приращивание аргумента для вычисления производной */
    double dx = 1e-5;

    /* Переменная для записи значения производной точке */
    double df;

    /* Индексная переменная */
    int k;

    /* Вычисление корня */
    for (k = 1; k  <= n; k++) {
        /* Значение производной */
        df = (f(x + dx) - f(x)) / dx;

        /* Новое приближение для корня */
        x -= f(x) / df;
    }

    return x;
}

int main(void)
{
    printf("Решение уравнения 2 - exp(x) = 0:\n");
    printf("Корень уравнения: %f\n", solve(F, 5, 1000));
    printf("Контрольное значение: %f\n", log(2));

    return 0;
}