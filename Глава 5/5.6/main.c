#include <stdio.h>
#include <stdlib.h>

/* Описание структуры */
struct MyStruct {
    int number;
    char symbol;
} obj;

/* Функция результатом возвращает экземпляр структуры */
struct MyStruct maker(int n, char s)
{
    struct MyStruct tmp = {.number = n, .symbol = s};

    return tmp;
}

/* Функция для отображения значений полей структуры */
void show(struct MyStruct obj)
{
    printf("Значение поля number: %d\n", obj.number);
    printf("Значение поля symbol: %c\n", obj.symbol);
    printf("------------------------\n");
}

int main(void)
{
    /* Присваивание экземпляру структуры результата вызова функции maker() */
    obj = maker(100, 'A');

    /* Отображение значений полей экземпляра obj */
    show(obj);

    /* Передача аргументов функции show() результата вызова функции maker() */
    show(maker(200, 'B'));

    /* Обращение к полям экземпляра структуры который возвращается функцией maker() */
    printf("Поля %d и %c\n", maker(300, 'C').number, maker(300, 'C').symbol);

    return 0;
}
