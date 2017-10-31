#include <stdio.h>
#include <stdlib.h>

/* Описание функций возвращающих целочисленный результат */
int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}

/* Факториал числа */
int fact(int n)
{
    if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

/* Степень числа */
int mypow(int x, int n)
{
    if (n == 0)
        return 1;
    else
        return x * mypow(x, n - 1);
}

int myrand(void)
{
    return rand() % 10;
}

int main(void)
{
    /* Инициализируется генератора случайных чисел */
    srand(5);

    /* Указатель на функцию возвращающую результатом целочисленное значение */
    int (*fn)();

    /* Присваивание значений указателю и вызов функции */
    fn = sum;
    printf("Сумма чисел: %d\n",fn(5));

    fn = fact;
    printf("Факториал числа: %d\n", fn(5));

    fn = mypow;
    printf("Степень двойки: %d\n", fn(2,5));

    fn = myrand;
    printf("Случайное число: %d\n",fn());

    return 0;
}