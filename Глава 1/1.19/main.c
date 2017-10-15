//
// Created by Oleg Bukatchuk on 15/10/2017.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Cумма вклада
    double m=1200;

    // Процентная ставка
    double r=7.5;

    // Время вклада (в годах) и индексная переменная
    int n=5,k=1;

    // Переменная для записи результатов
    double s=1;

    while (k<=n) {

        // Вычисление дохода
        s*=(1+r/100);
        k++;

    }

    printf("Сумма вклада (ден.ед):\t%.2f\n",m);
    printf("Процентная ставка (проц.):\t%.2f\n",r);
    printf("Вклад на %d лет\n",n);

    printf("Прибыль (в ден.ед):\t%.2f\n",m*(s-1));
    printf("Прибыль (в проц.):\t%.2f\n",100*(s-1));

    return 0;

}
