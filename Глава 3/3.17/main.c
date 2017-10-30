#include <stdio.h>
#include <stdlib.h>

#define MYTEXT "Введите текст"

/* Реализация текста */
int main(void)
{
    /* Объявление символьных массивов */
    char str[100]="Мы изучаем";
    char words[]="Вы ввели текст";
    char txt[]={'я', 'з', 'ы', 'к', ' ', 'С', '\0'};

    printf("%s %s\n", str, txt);
    printf("%s: ", MYTEXT);

    scanf("%[^\n]", str);
    printf("%s: %s\n", words, str);

    return 0;
}