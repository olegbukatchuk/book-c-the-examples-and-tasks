#include <stdio.h>
#include <stdlib.h>

/* Подключение файла с описанием функций */
#include "myfuncs.h"

int main(void)
{
    /* Вызов функции из внешнего файла */
    show();
    printf("Значение числовой функции: %d\n", value(10));

    /* Подключение файла с блоком кода */
#include "mycalcs.h"

    return 0;
}