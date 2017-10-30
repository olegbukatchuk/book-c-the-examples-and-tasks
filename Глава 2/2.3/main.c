#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Функция для определения названия дня по его номеру */
void findDay(int num)
{
    printf("Номер дня в неделе: %d\n", num);

    /* Символьный массив для записи названия дня */
    char name[20];

    /* Определяем название дня */
    if (num == 1)
        strcpy(name, "понедельник");
    else if (num == 2)
        strcpy(name, "вторник");
    else if (num == 3)
        strcpy(name, "среда");
    else if (num == 4)
        strcpy(name, "четверг");
    else if (num == 5)
        strcpy(name, "пятница");
    else if (num == 6)
        strcpy(name, "суббота");
    else if (num == 7)
        strcpy(name, "воскресенье");
    else
        strcpy(name, "нет такого дня");

    printf("День недели: %s\n", name);
}

int main(void)
{
    /* Индексная переменная */
    int k;

    /* Вызываем функцию в цикле (определяем название дня по его номеру) */
    for (k = 0; k <= 8; k++)
        findDay(k);

    return 0;
}