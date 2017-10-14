//
// Created by Oleg Bukatchuk on 15/10/2017.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int number;

    printf("Введите целое число: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("Чётное число!\n");
    } else {
        printf("Нечётное число!\n");
    }

    return 0;
}