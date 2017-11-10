#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Объединение */
union MyNumber {
    /* Целочисленное поле */
    int n;
    /* Символьный массив */
    char s[20];
} obj;

/* Функция результатом возвращает экземпляр объединения */
union MyNumber getNumber(char x, int state)
{
    /* Создание экземпляра обьединения */
    union MyNumber tmp;

    if (state)
        tmp.n = (int)(x + 10 - 'A');
    else {

    }
}