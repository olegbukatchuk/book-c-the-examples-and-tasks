#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Размер массивов */
#define SIZE 15

/* Описание объединения */
union MyUnion {
    /* Целочисленное поле */
    int num;

    /* Символьное поле */
    char symb;

    /* текстовое поле */
    char text[10];
};

int main(void)
{
    /* Массив из экземпляров обединения */
    union MyUnion data[SIZE];

    /* Массив для идентификации "типов" элементов массива из экземпляров объединения */
    int state[SIZE];

    /* Индексная переменная */
    int k;

    /* Инициализация генератора случайных чисел */
    srand(5);

    for (k = 0; k < SIZE; k++) {
        /*
         * Определение "типа" присваиваемого значения
         *
         * 0 - число
         * 1 - символ
         * 2 - текст
         */
        state[k] = rand() % 3;

        /* Присваивание значения элементу массива */
        switch (state[k]) {
            case 0:
                /* Случайное число от 0 до 9 */
                data[k].num = rand() % 10;
                break;
            case 1:
                /* Случайный символ от 'A' до 'I' */
                data[k].symb = (char)('A' + rand() % 10);
                break;
            case 2:
                /* Значение "текста" */
                strcpy(data[k].text, "текст");
        }
    }

    /* Отображение значений элементов массива */
    for (k = 0; k < SIZE; k++) {
        /* Числовое значение */
        if (state[k] == 0)
            printf("| %d ", data[k].num);
        else {
            if (state[k] == 1)
                /* Сивольное значение */
                printf("| %c ", data[k].symb);
            else {
                /* Текст */
                printf("| %s ", data[k].text);
            }
        }
    }

    return 0;
}