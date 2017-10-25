//
// Created by Oleg Bukatchuk on 25/10/2017.
//

// Инициализация массива
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Объявление и инициализация массивов
    double A[]={10.1,13.2,1.0,6.5,7.3};
    int B[7]={-1,3,2,9,0,2,1};

    // Индексная переменная
    int k;

    for (k=0;k<5;k++) {

        printf("| %3.1f",A[k]);

    }

    printf("|\n");

    for (k=0;k<7;k++) {

        printf("| %2d ",B[k]);

    }

    printf("|\n");

    return 0;

}