//
// Created by Oleg Bukatchuk on 27/10/2017.
//

// Прототип функции
#include <stdio.h>
#include <stdlib.h>

// Обьявление функций
void show(void);
int getInt(double);

int main(void) {

    // Вызов функции
    show();

    return 0;

}

void show(void) {

    printf("Вычисление целой части числа\n");

    double x=12.345678;
    printf("Исходное число: %f\n",x);
    printf("Целая часть числа: %d\n",getInt(x));

}

int getInt(double x) {

    return (int)x;

}