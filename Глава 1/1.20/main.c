#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    /* Создаём строку в массиве */
    char txt[100] = "Изучаем язык программирования C";

    /* Переменная для подсчёта количества символов */
    int length = 0;

    /* Считаем количество символов */
    while (txt[length] != '\0')
        length++;

    printf("Текст: %s\n", txt);
    printf("Количество символов:\t%d\n", length);
    printf("Контрольное значение:\t%lu\n", strlen(txt));

    return 0;
}