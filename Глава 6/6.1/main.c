#include <stdio.h>
#include <stdlib.h>

/* Директывы макроподстановки */
#define NUMS  1, 4, 7, 10, 13
#define LINE  printf("-------------------------\n");
#define SIZE  5
#define STUFF k = 0; k < SIZE; k++
#define TEXT  "Зачем копить добро в пустыне бытия?\n\
Кто вечно жил средь нас? Таких не видел я.\nВедь жизнь \
нам в долг дана, и то - на срок недолгий.\nА то, что в \
долг дано, не собственность твоя.\nОмар Хайям"

int main(void)
{
    int k;

    puts("Создание массива:");

    LINE

    /* Создание массива */
    int mynums[SIZE] = {NUMS};

    /* Отображение значений элементов массива */
    for (STUFF)
        printf("| %d ", mynums[k]);

    printf("|\n");

    puts("\nНемного поэзии:");

    LINE

    /* Отображение текста */
    puts(TEXT);

    return 0;
}