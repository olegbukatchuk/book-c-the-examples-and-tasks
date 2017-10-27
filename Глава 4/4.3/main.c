//
// Created by Oleg Bukatchuk on 27/10/2017.
//

// Статическая локальная переменная
#include <stdio.h>
#include <stdlib.h>

// Функция со статической локальной переменной
int counter(void) {

    // Локальная статическая переменная
    static int count=0;

    // Увеличение значения локальной переменной
    count++;

    // Результат функции
    return count;

}

int main(void) {

    // Индексная переменная
    int k;

    // Оператор цикла с вызовом функции counter()
    for (k=1;k<=10;k++) {

        printf("%d ",counter());

    }

    printf("\n");

    return 0;

}