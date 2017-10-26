//
// Created by Oleg Bukatchuk on 26/10/2017.
//

// Использование анонимных массивов
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Индексная переменная
    int k;

    // Создание указателя
    int *nums;

    // Присваивание значением указателю анонимного массива
    nums=(int[3]){1,2,3};

    // Отображение содержимого массива
    for (k=0;k<3;k++) {

        printf("%d",nums[k]);

    }

    printf("\n");

    // Отображение содержимого анонимного массива
    for (k=0;k<5;k++) {

        printf("%d ",(int[]){1,3,7,9}[k]);

    }

    printf("\n");

    return 0;

}