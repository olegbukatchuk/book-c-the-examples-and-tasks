#include <stdio.h>
#include <stdlib.h>

/* Глобальные переменные */
int number = 100;
char symbol = 'A';

/* Функция с локальной переменной */
void show(void)
{
    int number = 200;

    printf("Локальная переменная:\t%d\n", number);
    printf("Символьная переменная:\t%c\n", symbol);
}

/* Функция с аргументом */
void showInt(int number)
{
    printf("Аргумент функции:\t%d\n", number);
    printf("Символьная переменная:\t%c\n", symbol);
}

int main(void)
{
    char symbol = 'B';

    printf("Глобальная перменная:\t%d\n", number);
    printf("Символьная переменная:\t%c\n", symbol);

    /* Вызов функции с локальной переменной */
    show();

    /* Вызов функции с аргументом */
    showInt(300);

    return 0;
}
