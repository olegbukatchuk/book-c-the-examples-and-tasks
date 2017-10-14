//
// Created by Oleg Bukatchuk on 14/10/2017.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num;
    char symb;

    int *p;
    char *q;

    p = &num;
    q = &symb;

    *p = 100;
    *q = 'A';

    printf("Значение переменной num: %d\n", num);
    printf("Значение переменной symb: %c\n", symb);

    num = 200;
    symb = 'B';

    printf("Значение по адресу p: %d\n", *p);
    printf("Значение по адресу q: %c\n", *q);

    return 0;
}