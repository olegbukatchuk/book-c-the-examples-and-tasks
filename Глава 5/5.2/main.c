#include <stdio.h>
#include <stdlib.h>

/* Описание структуры */
struct MyStruct {
    int number;
    char symbol;
};

int main(void)
{
    /* Создание и инициализация экземпляров структуры */
    struct MyStruct objA = {100, 'A'};
    struct MyStruct objB = {200, 'B'};

    printf("Поля экземпляра objA: %d и %c\n", objA.number, objA.symbol);
    printf("Поля экземпляра objB: %d и %c\n", objB.number, objB.symbol);

    return 0;
}