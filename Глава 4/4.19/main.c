#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Функция возвращает квадрат аргумента */
double sqr(double x)
{
    return x * x;
}

/* Функция которая аргументом передаётся указатель на функцию */
void apply(double (*f)(double), double *nums, int n)
{
    int k;

    /* Изменение значений массива */
    for (k = 0; k < n; k++)
        nums[k] = f(nums[k]);
}

/* Функция для отображения содержимого массива */
void show(double *nums, int n)
{
    int k;

    for (k = 0; k < n; k++)
        printf("| %.2f", nums[k]);

    printf("|\n");
}

int main(void)
{
    /* Исходный массив */
    double nums[5] = {1, 2, 3, 4, 5};

    printf("Исходный массив:\n");
    show(nums, 5);

    /* Возведение в квадрат */
    apply(sqr, nums, 5);

    printf("После возвращения в квадрат:\n");
    show(nums, 5);

    /* Извлечение квадратного корня */
    apply(sqrt, nums, 5);

    printf("После извлечения квадратного корня:\n");
    show(nums, 5);

    return 0;
}