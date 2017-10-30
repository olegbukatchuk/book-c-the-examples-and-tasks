#include <stdio.h>
#include <stdlib.h>

/* Определение макроса (без аргументов) */
#define message() printf("Отображаются числа:\n");

/* Определение макроса (с одним аргументом) */
#define numbers(n) int k;\
        for (k = 1; k <= (n); k++)\
            printf("%d ", k);\
        printf("\n");

int main(void)
{
    /* Вызов макросов */
    message();
    numbers(12);

    return 0;
}