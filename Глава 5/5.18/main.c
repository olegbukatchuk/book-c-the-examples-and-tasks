#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Объединение */
union MyNumber {
    /* Целочисленное поле */
    int n;
    /* Символьный массив */
    char s[200];
} obj;

/* Функция результатом возвращает экземпляр объединения */
union MyNumber getNumber(char x, int state)
{
    /* Создание экземпляра обьединения */
    union MyNumber tmp;

    if (state)
        tmp.n = (int)(x + 10 - 'A');
    else {
        switch (x) {
            case 'A':
                strcpy(tmp.s, "десять");
                break;
            case 'B':
                strcpy(tmp.s, "одиннадцать");
                break;
            case 'C':
                strcpy(tmp.s, "двенадцать");
                break;
            case 'D':
                strcpy(tmp.s, "тринадцать");
                break;
            case 'E':
                strcpy(tmp.s, "четырнадцать");
                break;
            case 'F':
                strcpy(tmp.s, "пятнадцать");
        }
    }

    return tmp;
}

int main(void)
{
    /* Символьная переменная */
    char k;

    /* Отображение числовых значений */
    for (k = 'A'; k <= 'F'; k++)
        printf("%c - %d\n", k, getNumber(k, 1).n);

    printf("-------------------------------\n");

    /* Отображение текстовых значений */
    for (k = 'A'; k <= 'F'; k++) {
        /* Результат вызова функции присваивается значением экземпляру объединения */
        obj = getNumber(k, 0);

        /* Отображение текста из символьного массива */
        printf("%c - %s\n", k, obj.s);
    }

    return 0;
}