#include <stdio.h>
#include <stdlib.h>

/* Описание структуры */
struct MyStruct {
    int number;
    char symbol;
};

int main(void)
{
    /* Создание  экземпляра структуры */
    struct MyStruct obj;

    obj.number = 123;
    obj.symbol = 'D';

    printf("Значение поля number: %d\n", obj.number);
    printf("Значение поля symbol: %c\n", obj.symbol);

    return 0;
}