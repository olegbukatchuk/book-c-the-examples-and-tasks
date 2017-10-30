#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Целочисленная переменная */
    int number;

    printf("Введите целое число: ");
    scanf("%d", &number);

    /* Условие */
    if (number % 2 == 0) {
        printf("Чётное число!\n");   /* Если условие истинно */
    else
        printf("Нечётное число!\n"); /* Если условие ложно */

    return 0;
}