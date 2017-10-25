//
// Created by Oleg Bukatchuk on 25/10/2017.
//

// Массивы и указатели
#include <stdio.h>
#include <stdlib.h>

// Размер массива
#define SIZE 10

int main(void) {

    // Создаём массив
    int nums[SIZE];

    // Указатель на первый элемент
    int *p=nums;

    // Указатель на последний элемент
    int *q=nums+SIZE-1;

    int k;

    for (k=0;k<SIZE;k++) {

        q[-k]=k+1;

    }

    while (p<=q) {

        printf("| %d ",*p);
        p++;

    }

    printf("|\n");

    return 0;

}