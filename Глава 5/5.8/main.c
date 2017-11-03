#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Размер массива */
#define SIZE 5

/* Описание структуры */
struct MyNums {
    char name[100];
    int nums[SIZE];
} objB;

/* Функция для отображения значений полей экземпляра структуры */
void show(struct MyNums obj)
{
    /* Отображение текста из символьного массива */
    puts(obj.name);

    /* Индексная переменная */
    int k;

    /* Отображение содержимого числового массива */
    for (k = 0; k < SIZE; k++)
        printf("| %d ", obj.nums[k]);

    printf("|\n");
}

int main(void)
{
    struct MyNums objA = {"Натуральные числа", {1, 2, 3, 4, 5}};

    /* Отображение значений полей экземпляра структуры */
    show(objA);

    /* Присваивание экземпляров структур */
     objB = objA;

    /* Отображение значений полей экземпляров структуры */
    show(objB);

    /* Изменение значений полей экземпляров структур */
    strcpy(objB.name, "Нечётные числа");
    strcpy(objA.name, "Чётные числа");

    objA.nums[0] = 0;

    int k;

    /* Изменение значений элементов числового массива */
    for (k = 1; k < SIZE; k++) {
        objA.nums[k] = objA.nums[k - 1] + 2;
        objB.nums[k] = objB.nums[k - 1] + 2;
    }

    /* Отображение значений полей экземпляров структуры */
    show(objA);
    show(objB);

    return 0;
}

