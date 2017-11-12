#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(void)
{
    int k;

    /* Массив с фамилиями писателей */
    char writers[SIZE][100] = {"Л.Н.Толстой", "А.П.Чехов", "Ф.М.Достоевский", "А.Н.Толстой", "В.А.Карелин"};

    /* Массив с названиями произведений */
    char titles[SIZE][100] = {"Анна Каренина", "Каштанка", "Преступление и наказание", "Аэлита", "Два капитана"};

    /* Массив с названием файла */
    char myfile[] = "Books.txt";

    /* Открытие файла для записи */
    FILE *f = fopen(myfile, "w");

    if (f) {
        /* Заполнение файла */
        for (k = 0; k < SIZE; k++) {
            fprintf(f, "Запись N%d:\n", k + 1);
            fprintf(f, "Автор: %s\nНазвание: %s\n", writers[k], titles[k]);
            fprintf(f, "--------------------------------\n");
        }

        fclose(f);
        printf("Файл заполнен\n");
    } else {
        printf("Не удалось открыть файл\n");
    }

    return 0;
}