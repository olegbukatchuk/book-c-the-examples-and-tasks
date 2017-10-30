#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Целочисленная переменная */
    int number;

    printf("Введите целое число: ");
    scanf("%d", &number);

    printf(number % 2 ? "Нечётное число!\n" : "Чётное число!\n");

    return 0;
}
