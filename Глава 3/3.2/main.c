//
// Created by Oleg Bukatchuk on 24/10/2017.
//

// Побайтовое заполнение области памяти
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int number;

    // Указатель на символьное значение
    char *pnt;

    int k,bites;

    // Определение количества байтов, выделяемых для целочисленных значений
    bites=(int)sizeof(int);

    // Присваивание значения указателю
    pnt=(char*)&number;

    // Побайтовое заполнение области памяти выделенной под переменную number
    for (k=1;k<=bites;k++) {

        // Значение байта
        *pnt=1;

        // Переход к следующему байту
        pnt++;

    }

    printf("Значение переменной number: %d\n",number);

    number=0;

    // Указатель устанавливается на второй бит
    pnt-=bites-1;

    // Значение байта
    *pnt=2;

    printf("Значение переменной number: %d\n",number);

    return 0;

}