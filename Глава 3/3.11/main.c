//
// Created by Oleg Bukatchuk on 25/10/2017.
//

// Создание массива переменной длины
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Размер массива и индексная переменная
    int n,k;

    // Определение размера массива
    printf("Укажите размер массива: ");
    scanf("%d",&n);

    // Создание массива
    int nums[n];

    // Инициализация генератора случайных чисел
    srand(5);

    // Заполнение массива случайными числами
    for (k=0;k<n;k++) {

        nums[k]=rand()%10;

        printf("| %d ",nums[k]);

    }

    printf("|\n");

    return 0;

}