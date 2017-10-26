//
// Created by Oleg Bukatchuk on 26/10/2017.
//

// Массив со строками переменной длинны
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Первый массив
    int first[4]={1,2,3,4};

    // Второй массив
    int second[3]={5,6,7};

    // Третий массив
    int third[5]={8,9,10,11,12};

    // Массив указателей
    int* nums[3];

    // Заполнение массива указателей
    nums[0]=first;
    nums[1]=second;
    nums[2]=third;

    // Массив определяющий размеры строк
    int cols[3]={4,3,5};

    // Индексные переменные
    int i,j;

    // Отображение значений элементов массива
    for (i=0;i<3;i++) {

        for (j=0;j<cols[i];j++) {

            // Отображение значения элемента
            printf("%3d ",nums[i][j]);

        }

        printf("\n");

    }

    return 0;

}