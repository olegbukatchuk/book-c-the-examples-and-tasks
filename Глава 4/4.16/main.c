#include <stdio.h>
#include <stdlib.h>

/*
 * Функция для отображения текста в обратном порядке (используется рекурсия)
 */
void show(char *txt)
{
    /* Если следующий элемент не нуль-сивол */
    if (txt + 1)
        show(txt + 1);

    printf("%c", *txt);
}

int main(void)
{
    /* Массив с текстом */
    char str[1000] = "А роза упала на лапу Азора";
    puts(str);
    show(str);

    printf("\n");
    show("Изучаем язык программирования С");
    printf("\n");

    return 0;
}