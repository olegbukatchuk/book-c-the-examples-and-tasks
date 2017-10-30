#include <stdio.h>
#include <stdlib.h>

/* Прототип функции */
void show(void);
int getInt(double);

int main(void)
{
    /* Вызов функции */
    show();

    return 0;
}

void show(void)
{
    printf("Вычисление целой части числа\n");

    double x = 12.345678;
    printf("Исходное число: %f\n", x);
    printf("Целая часть числа: %d\n", getInt(x));
}

int getInt(double x)
{
    return (int)x;
}