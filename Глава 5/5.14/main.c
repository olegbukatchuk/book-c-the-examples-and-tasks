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

}