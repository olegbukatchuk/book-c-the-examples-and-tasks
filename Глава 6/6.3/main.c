#include <stdio.h>
#include <stdlib.h>

/* Макрос с параметрами */
#define SUM(x, y) x + y

int main(void)
{
    /* Использование макроса с параметрами */
    printf("%d + %d = %d\n", 1, 2, SUM(1, 2));
    printf("%.2f + %.2f = %.2f\n", 1.0, 2.0, SUM(1.0, 2.0));
    printf("%c + %d = %c\n", 'A', 5, SUM('A', 5));

    return 0;
}