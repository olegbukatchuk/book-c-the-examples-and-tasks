#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Размер массива для записи битов числа */
    const int size = sizeof(char) * 8;

    /* Массив для записи битов */
    _Bool bits[size];

    /* Индексная переменная */
    int k;

    /* Число для "разложения" на биты */
    char number;

    printf("Введите число: ");
    scanf("%d", &number);

    for (k = 0; k < size; k++) {
        /* Запись бита в массив */
        bits[size - k - 1] = number&1;

        /* Сдвиг в право в битовом представлении числа */
        number >>= 1;
    }

    for(k = 0; k < size; k++)
        printf("| %d ", bits[k]);

    printf("|\n");

    return 0;
}
