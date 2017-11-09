#include <stdio.h>
#include <stdlib.h>

/* Описание структуры */
struct MyStruct {
    /* Анонимная структура */
    struct {
        char symbol;
        int number;
    };
    char name[100];
};

/* Функция для отображения значений полей экземпляра структуры MyStruct */
void show(struct MyStruct obj)
{
    printf("Поле symbol: %c\n", obj.symbol);
    printf("Поле number: %d\n", obj.number);
    printf("Поле name: %s\n", obj.name);
}

int main(void)
{
    /* Создание и инициализация экземпляра структуры */
    struct MyStruct obj = {{'A', 100}, "MyStruct"};

    puts("Экземпляр структуры MyStruct:");

    /* Отображение значений полей экземпляра */
    show(obj);

    /* Изменение значений полей экземпляра */
    obj.symbol = 'B';
    obj.number = 200;

    puts("После изменения значений полей:");

    /* Отображение значений полей */
    show(obj);

    return 0;
}