#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number; /* Целочисленная переменная */

    printf("Введите целое число: ");
    scanf("%d", &number);

    /* Условие */
    if (number % 2 == 0)
        printf("Чётное число!\n");   /* Если условие истинно */

    if (number % 2 == 1)
        printf("Нечётное число!\n"); /* Если условие истинно */

    return 0;
}