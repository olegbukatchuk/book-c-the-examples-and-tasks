#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Подынтегральные функции */
double f1(double x)
{
    return x * exp(-x);
}

double f2(double x)
{
    return x / (1 + x);
}

double f3(double x)
{
    return 1 / x;
}

/* Функция для вычисления интеграла */
double integrate(double (*f)(double), double a, double b)
{
    /* Верхняя граница для шага дискретности по аргументу */
    double dx = 1e-4;

    /* Количество интервалов */
    int n = (int)(b - a) / dx + 1;

    /* Шаг приращения по аргументу */
    double h = (b - a) / n;

    /* Перемещение для записи интегральной суммы */
    double s = h * (f(a) + f(b)) / 2;

    int k;

    for (k = 1; k <= n - 1; k++)
        s += h * f(a + k * h);

    return s;
}

int main(void)
{
    printf("%f vs. %f\n", integrate(f1, 0, 2), 1 - 3 * exp(-2));
    printf("%f vs. %f\n", integrate(f2, 0, 3), 3 - 2 * log(-2));
    printf("%f vs. %f\n", integrate(f3, 1, 2), log(2));

    return 0;
}