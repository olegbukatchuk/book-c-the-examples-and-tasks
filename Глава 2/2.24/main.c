//
// Created by Oleg Bukatchuk on 19/10/2017.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Количество слагаемых
    int n=10;

    printf("Сумма %d нечётных чисел равна ",n);

    // Индексная переменная, переменная для записи
    // значения слагаемого и переменная для записи суммы
    int k,q=1,s=0;

    // Вычисляем сумму
    for (k=1;k<=n;q++) {

        if (q%2==0) {

            continue;

        }

    }

    printf("%d\n",s);

    return 0;
}
