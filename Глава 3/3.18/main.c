#include <stdio.h>
#include <stdlib.h>

/* Использование функции puts() и gets() */
int main(void)
{
    /* Объявление символьного массива */
    char str[100] = "Мы изучаем язык С";

    puts(str);
    puts("Введите текст: ");
    gets(str);

    puts("Вы ввели такой текст: ");
    puts(str);

    return 0;
}