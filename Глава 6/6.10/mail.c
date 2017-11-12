#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main(void)
{
    /* Символьный массив */
    char txt[SIZE];

    /* Указатель на файл */
    FILE *f;

    /* Попытка открыть файл для считывания */
    if (f = fopen("Pushkin.txt", "r")) {
        while (fgets(txt, SIZE, f) != NULL) {
            /* Отображение считанной строки */
            printf(txt);
            /* Отображение "линии" */
            puts("---------------------------\n");
        }

        /* Закрытие файла */
        fclose(f);
    } else {
        /* Если НЕ удалось открыть файл */
        printf("Не удалось открыть файл\n");
    }

    return 0;
}