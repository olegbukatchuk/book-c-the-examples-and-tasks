#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Символьные переменные */
    char first = 'A', last = 'Z';
    char x;

    /* Целочисленная переменная */
    int count;

    /* Считаем значения переменных */
    count = last - first + 1;
    x = first + 10;

    printf("Первый символ: %c\n", first);
    printf("Код первого символа: %d\n", first);
    printf("Последний символ: %c\n", last);
    printf("Код последнего символа: %d", last);
    printf("Колиество букв: %d\n", count);
    printf("Символ \'%c\' с кодом %d\n", x, x);

    return 0;
}