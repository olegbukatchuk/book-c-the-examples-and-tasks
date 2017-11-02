#include <stdio.h>
#include <stdlib.h>

struct MyStruct {
    int number;
    char symbol;
};

int main(void)
{
    /* Явная инициализация экземпляра структуры */
    struct MyStruct objA = {.symbol = 'A', .number = 100};

    /* Значение задано только для одного поля */
    struct MyStruct objB = {.number = 200};

    /* Присваиваем значение полю */
    objB.symbol = 'B';

    printf("Поля экземпляра objA: %d и %c\n", objA.number, objA.symbol);
    printf("Поля экземпляра objB: %d и %c\n", objB.number, objB.symbol);

    return 0;
}