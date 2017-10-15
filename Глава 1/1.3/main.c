//
// Created by Oleg Bukatchuk on 14/10/2017.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Значение числа Пи
    const double pi=3.141592;

    // Переменная для записи значения радиуса
    double R=3;

    // Переменная для записи значения площади круга
    double S,L=2*pi*R;

    // Считаем значение площади круга
    S=pi*R*R;

    printf("Длина окружности радиуса %.2f: %f\n", R, L);
    printf("Площадь круга радиуса %.2f: %f\n", R, S);

    return 0;
}