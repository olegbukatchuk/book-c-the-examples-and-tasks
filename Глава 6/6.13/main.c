#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Символьная переменная */
    char s = 'A';

    /* Целочисленная переменная */
    int k;

    /* Открытие файла */
    FILE *f = fopen("MyData.txt", "w+");

    if (f) {
        /* Запись в файл символов и их кодов */
        while (s <= 'K') {
            /* Запись в файл символов и их кодов */
            fprintf(f, "%c - %d\n", s, s);

            /* Новое значение для символа */
            s++;
        }

        /* Перемещение курсора в начало файла */
        rewind(f);

        /* Считывание символов */
        while (!feof(f)) {
            /* Из файла считывается символ */
            fscanf(f, "%c - %*d\n", &s);

            /* Символ отображается в консольном окне */
            printf("|%c ", s);
        }

        printf("|\n");

        /* Перемещение курсора в начало файла */
        rewind(f);

        /* Считывание кодов символов */
        while (!feof(f)) {
            /* Из файла считывается число (код символа) */
            fscanf(f, "%*c - %d\n", &k);

            /* Код символа отображается в консоли */
            printf("| %d ", k);
        }

        printf("\n");

        fclose(f);
    } else {
        puts("Не удалось открыть файл\n");
    }

    return 0;
}