//
// Created by Oleg Bukatchuk on 14/10/2017.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Целочисленная переменная
    int num;

    // Символьная переменная
    char symb;

    // Указатель на целочисленное значение
    int *p;

    // Указатель на символьное значение
    char *q;

    // Присваиваем значения указателям
    p = &num;
    q = &symb;

    // Присваиваем значения переменным через указатели
    *p = 100;
    *q = 'A';

    printf("Значение переменной num: %d\n", num);
    printf("Значение переменной symb: %c\n", symb);

    // Присваиваем значения переменным (повторно)
    num = 200;
    symb = 'B';

    printf("Значение по адресу p: %d\n", *p);
    printf("Значение по адресу q: %c\n", *q);

    return 0;
}