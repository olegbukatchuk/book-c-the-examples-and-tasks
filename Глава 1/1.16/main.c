//
// Created by Oleg Bukatchuk on 15/10/2017.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

    // Масса электрона
    double m=9.1E-31;

    // Скорость света
    double c=2.998E8;

    // Переменые для записи значения энергии и
    // безразмерной скорости (в единицах скорости света)
    double energy, b;

    // Переменные для использования в операторе цикла
    int n=10, k;

    printf("Скорость v/c\tЭнергия(Дж)\n");

    // Вычисление энергии электрона для разных значений
    // скорости электрона
    for (k=0;k<n;k++) {

        // Безразмерное значенте скорости
        b=(double)k/n;

        // Энергия электрона
        energy=m*c*c*(1/sqrt(1-b*b)-1);

        printf("\t%.1f\t%e\n", b, energy);
    }

    return 0;
}