//
// Created by Oleg Bukatchuk on 15/10/2017.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Считаем скорость электрона
void  getV(double A) {

    // Масса электрона
    double m=9.1E-31;

    // Скорость света
    double c=2.998E8;

    // Длина волны фотона
    double l=2.5E-7;

    // Постоянная Планка
    double h=6.626E-34;

    // Коэффициент для перевода эВ в Дж
    double k=1.6E-19;

    // Частота
    double nu=c/l;

    // Энергия фотона
    double En=h*nu;

    // Переменная для записи значения скорости
    double V;

    printf("Работа выхода электрона %.2f(эВ)\n", A);

    // Работа выхода переводится в Дж
    A*=k;

    if (En<A) {

        printf("Энергии фотона недостаточно для выхода электрона из металла\n");

    } else {

        // Считаем скорость электрона
        V=sqrt(2*(En-A)/m);

        printf("Скорость электрона %e (м/с)\n", V);

    }

}

int main(void) {

    // Вызов функции getV с разными аргументами
    getV(4.5);
    getV(5.0);

    return 0;

}