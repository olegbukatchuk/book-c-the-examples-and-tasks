#include <stdio.h>
#include <stdlib.h>

/* Описание функций без аргумента, не возвращающих результат */
void hi(void)
{
    printf("Функция hi()\n");
}

void hello(void)
{
    printf("Функция hello()\n");
}

void show(void)
{
    printf("Функция show()\n");
}

/* Описание функций с целочисленным аргументом возвращающих результат типа double */
double first(int a)
{
    return (double) a / 10;
}

double second(int a)
{
    return (double) 1 / a;
}

double third(int a)
{
    return (double) a / 10 + (double) 1 / a;
}

int main(void)
{
    /* Указатель на функцию без аргументов не возвращает результат */
    void (*p)(void);

    /* Указатель на функцию с одним аргументом типа int возвращающую результат типа double */
    double (*q)(int);

    /* Указатель */
    p = hi;

    /* Вызов функции через указатель */
    p();

    p = &hello;

    p();

    /* Значение указателя */
    p = show;

    /* Вызов функции через указатель */
    (*p)();

    /* Значение указателя */
    q = first;

    printf("%f\n", q(10));

    q = &second;

    printf("%f\n",q(10));

    q = third;

    printf("%f\n", (*q)(10));

    return 0;
}