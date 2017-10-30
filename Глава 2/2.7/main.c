#include <stdio.h>
#include <stdlib.h>

/* Определяем будний или вызодной день по его номеру */
void findDay(int num)
{
    printf("Номер дня в неделе: %d\n", num);

    printf("Этот день ");

    /* Оператор выбора для определения буднего или выходного дня */
    switch (num) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("будний\n");
            break;
        case 6:
        case 7:
            printf("выходной\n");
            break;
        default:
            printf("непонятно какой\n");
    }
}

int main(void)
{
    int k;

    /* Определяем будний или вызодной день (через функцию) */
    for (k = 0; k <= 8; k++)
        findDay(k);

    return 0;
}