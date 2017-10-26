//
// Created by Oleg Bukatchuk on 26/10/2017.
//

// Двумерный символьный массив
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Двумерный символьный массив
    char str[4][100]={"белый","красный","желтый","зелёный"};

    int k;

    // Отображение строк двумерного массива
    for (k=0;k<4;k++) {

        puts(str[k]);

    }

    return 0;

}