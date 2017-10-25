//
// Created by Oleg Bukatchuk on 25/10/2017.
//

// Некоторые функции для работы с текстом
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    // Символьный массив с текстовым значением
    char txt[100]="Мы изучаем язык программирования C";

    // Пустой символьный массив
    char str[100];

    printf("%s\n",txt);

    printf("Длина текста: %d\n",strlen(txt));

    // Копирование текстового значения
    strcpy(str,txt);

    // Сравнение исходного текста и копии
    if (!strcmp(str,txt)) {

        printf("Создана копия текстовой строки\n");

    }

    // Изменение исходного текста
    strcat(txt,", и не изучаем Java");

    // Сравнение текстовых значений
    if (strcmp(str,txt)) {

        printf("Исходная строка изменилась\n");

    }

    // Содержимое исходной строки
    printf("%s\n",txt);

    //
    printf("%s\n",str);

    // Содержимое копии
    printf("%s\n",strchr(txt,'и'));

    // Поиск подстроки в строке
    printf("%s\n",strstr(txt,'и не'));

    return 0;

}