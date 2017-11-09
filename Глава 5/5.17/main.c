#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Описание объединения */
union MyUnion {
    /* Целочисленное значение */
    int number;

    /* Символьное поле */
    char symbol;

    /* Поле - массив */
    char text[20];
};

int main(void)
{
    printf("Размер памяти: %d\n", sizeof(union MyUnion));

    /* Создание экземпляра объединения */
    union MyUnion obj;

    /* Присваивание значения полю text */
    strcpy(obj.text, "ABCDEFGHIJKLMOP");

    /* Проверка значения поля symbol */
    printf("Поле symbol: %c\n", obj.symbol);

    /* Проверка значения поля number */
    printf("Поле number: %d\n", obj.number);

    /* Присваивание значения полю number */
    obj.number = 1094795585;

    printf("Поле number: %d\n", obj.number);
    printf("Поле symbol: %c\n", obj.symbol);
    printf("Поле text: %s\n", obj.text);

    return 0;
}