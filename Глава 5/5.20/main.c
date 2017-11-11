#include <stdio.h>
#include <stdlib.h>

int first(int n)
{
    return n * (n + 1) / 2;
}

int second(int n)
{
    return n * (n + 1) * (2 * n + 1) / 6;
}

struct MyFunc {
    /* Поле структуры - указатель на функцию */
    int (*f)(int);
} obj;

int main(void)
{
    /* Значение поля экземпляра структуры */
    obj.f = first;

    printf("Первая функция: %d\n", obj.f(5));

    /* Новое значене поля экземпляра структуры */
    obj.f = second;

    printf("Вторая функция: %d\n", obj.f(5));

    return 0;
}