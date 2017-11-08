#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Описание структуры с полем являющимся массивом произольного размера */
struct MyNums {
    char name[100];
    int size;
    int numbers[];
};

/* Функция для отображения содержимого в массиве, являющегося полем в экземпляре структуры */
void show(struct MyNums *p)
{
    /* Отображение содержимого символьного массива */
    puts(p->name);

    /* Индексная переменная */
    int k;

    /* Отображение значений элементов массива */
    for (k = 0; k < p->size; k++)
        printf("| %d ", p->numbers);

    printf("|\n");
}

int main(void)
{
    /* Количество чисел и индексная переменная */
    int n = 10, k;

    /* Указатель на экземпляр структуры */
    struct MyNums *pnt;

    /* Создание экземпляра структуры */
    pnt = malloc(sizeof(struct MyNums) + n * sizeof(int));

    /* Значения полей экземпляра структуры */
    strcpy(pnt->name, "Натуральные числа");
    pnt->size = n;

    for (k = 0; k < pnt->size; k++)
        pnt->numbers[k] = k + 1;

    /* Отображение содержимого экземпляра структуры */
    show(pnt);

    /* Удаление экземпляра структуры */
    free(pnt);

    /* Новое количество чисел */
    n = 12;

    /* Новый укземпяр структуры */
    pnt = malloc(sizeof(struct MyNums) + n * sizeof(int));

    /* Значения полей экземпляра структуры */
    strcpy(pnt->name, "Четные числа");
    pnt->size = n;

    for (k = 0; k < pnt->name; k++)
        pnt->numbers[k] = 2 * (k + 1);

    /* Отображение содержимого экземпляра структуры */
    show(pnt);

    /* Удаление экземпляра структуры */
    free(pnt);

    return 0;
}