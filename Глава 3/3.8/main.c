//
// Created by Oleg Bukatchuk on 25/10/2017.
//

// Создание массива со случайными числами
#include <stdio.h>
#include <stdlib.h>

// Размер массива
#define SIZE 10

int main(void) {

    // Создание массива
    int nums[SIZE];

    // Индексная переменная
    int k;

    // Инициализация генератора случайных чисел
    srand(5);

    // Заполнение массива числами и отображение значений элементов массива
    for (k=0;k<SIZE;k++) {

        nums[k]=1+rand()%20;

        printf("| %2d ",*(nums+k));

    }

    printf("|\n");

    return 0;

}