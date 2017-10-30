#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Запись текста в обратном порядке */
int main(void)
{
    /* Исходный текст */
    char txt[100] = "А роза упала на лапу Азора";

    puts(txt);

    /* Индексная переменная */
    int k;

    /* Символ */
    char s;

    /* Указатель на символ */
    char *p;

    /* Указатель устанавливается на нуль-символ */
    p = strchr(txt, '\0');

    /* Преобразование текста */
    for (k = 0; (txt + k) < p; k++) {
        p--;
        s = *p;
        *p = txt[k];
        txt[k] = s;
    }

    puts(txt);

    return 0;
}