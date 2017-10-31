#include <stdio.h>
#include <stdlib.h>

/* Функция которая задаёт уравнение */
double f(double x, double y)
{
    return (1 / x -y) * y;
}

/* Функция для решения дифференциального уравнения */
double dsolve(double (*f)(double, double), double x0, double y0, double x)
{
    /* Максимальное приращение аргумента */
    double dx = 1e-5;

    /* Количество интервалов */
    int n = (int)((x - x0) / dx) + 1;

    /* Приращение аргумента */
    double h = (x - x0) / n;

    /* Индексная переменная */
    int k;

    /* Переменная для записи значения искомой функции*/
    double y = y0;

    /* Вычисление результата */
    for (k = 1; k <= n; k++)
        y = y + h * f(x0 + k * h, y);

    return y;
}

/* Функция - точное решение задачи Коши */
double y(double x0, double y0, double x)
{
    return 2 * x * y0 / (2 * x0 + y0 * (x * x - x0 * x0));
}

int main(void)
{
    /* Начальная точка, значение функции в начальной точке, приращение по аргументу */
    double x0 = 1, y0 = 5, dx = 1;

    int k;

    printf(" x |y(x)\t| контроль\n");
    printf("--------------------\n");

    /* Вычисление функции в разных точках */
    for (k = 0; k <= 9; k++)
        printf(" %4.1f|%f| %f\n", x0+k*dx, dsolve(f, x0, y0, x0 + k * dx), y(x0, y0, x0 + k * dx));

    return 0;
}