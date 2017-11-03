#include <stdio.h>
#include <stdlib.h>

/* Описание структуры */
struct MyStruct {
    char symbol;
    int number;
};

int main(void)
{
    /* Объявление экземпляра структуры */
    struct MyStruct obj;

    /* Создание указателя на экземпляр структуры */
    struct MyStruct *pnt;

    /* Присваивание значения указателя */
    pnt = &obj;

    /* Присваивание значений полям экземпляра структуры */
    (*pnt).symbol = 'A';
    pnt->number = 100;

    printf("Поле symbol: %c\n", obj.symbol);
    printf("Поле number: %d\n", obj.number);

    return 0;
}