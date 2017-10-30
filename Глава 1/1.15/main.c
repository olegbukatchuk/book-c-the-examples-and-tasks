#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    /* Объявление символьных массивов */
    char txt[100] = "Введите текстовое значение: ";
    char str[120];

    printf("%s", txt);
    scanf("%[^\n]", str);

    /* Копирование текстовой строки */
    strcpy(txt, "Вы ввели текст: ");

    printf("%s%s\n", txt, str);

    return 0;
}

