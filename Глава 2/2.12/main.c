//
// Created by Oleg Bukatchuk on 19/10/2017.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Количество слагаемых
    int n;

    // Считывание значения для количества слагаемых
    printf("Сколько слагаемых в сумме? ");
    scanf("%d",&n);

    printf("Сумма %d нечётных чисел равна ",n);

    // Переменная для записи суммы
    int s=0;

    // Вычисление суммы не чётных чисел
    while (n) {

        s+=2*(n--)-1;

    }

    printf("%d\n",s);

    return 0;

}
