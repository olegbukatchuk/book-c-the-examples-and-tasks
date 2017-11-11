#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Создание синонима для типа int */
    typedef int NUMBER;

    /* Создание синонима для типа int* (указатель на целое число) */
    typedef  int* POINTER;

    /* Создание синонима для массива из 100 элементов типа char (массив для записи текста) */
    typedef char STRING[100];

    /* Использование синонимов для идентификаторов типов */
    NUMBER num;  // Целое число
    POINTER pnt; // Указатель на целое число

    pnt = &num;
    *pnt = 123;

    printf("%d\n", num);

    STRING text = "Изучаем язык C"; // Символьный массив
    printf("%s\n", text);

    return 0;
}