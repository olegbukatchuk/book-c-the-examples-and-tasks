//
// Created by Oleg Bukatchuk on 15/10/2017.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Целочисленная переменная
    int number;

    printf("Введите целое число: ");
    scanf("%d",&number);

    // Условие
    if (number%2==0) {

        // Если условие истинно
        printf("Чётное число!\n");

    } else {

        // Если условие ложно
        printf("Нечётное число!\n");
    }

    return 0;

}