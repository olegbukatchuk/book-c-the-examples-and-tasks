#include <stdio.h>
#include <stdlib.h>

/* Функции аргументом передаётся текст */
void show(char* txt)
{
    /* Указатель на символьное значение */
    char *p = txt;

    /* Счётчик символов */
    int count = 0;

    /* Поэлементное отображение символов из текста */
    while (*p) {
        printf("|%c",*p);
        p++;
        count++;
    }

    printf("|\n");

    /* "Уточнение" значения счётчика */
    count = 2 * count + 1;

    /* Отображение "линии" */
    while (count) {
        printf("-");
        count--;
    }

    printf("\n");
}

int main(void)
{
    /* Символьный массив */
    char txt[100] = "Программируем на языке C";

    /* Вызов функции с передачей ей аргументом текста */
    show(txt);
    show("Мы не изучаем Java");

    return 0;
}