#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Функция определения дня по его номеру */
void findDay(int num)
{
    printf("Номер дня в неделе: %d\n",num);

    /* Символьный массив для записи названия дня */
    char name[20];

    /* Опреатор выбора для определения дня */
    switch (num) {
        case 1:
            strcpy(name, "понедельник");
            break;
        case 2:
            strcpy(name, "вторник");
            break;
        case 3:
            strcpy(name, "среда");
            break;
        case 4:
            strcpy(name, "четверг");
            break;
        case 5:
            strcpy(name, "пятница");
            break;
        case 6:
            strcpy(name, "суббота");
            break;
        case 7:
            strcpy(name, "воскресенье");
            break;
        default:
            strcpy(name, "нет такого дня");
    }

    printf("День недели: %s\n", name);
}

int main(void)
{
    int k;

    /* Определяем навание дня (через функцию) */
    for (k = 0; k <= 8; k++)
        findDay(k);

    return 0;
}