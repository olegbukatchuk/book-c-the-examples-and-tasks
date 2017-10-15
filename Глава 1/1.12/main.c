//
// Created by Oleg Bukatchuk on 15/10/2017.
//

#include <stdio.h>
#include <stdlib.h>

void hello(void) {
    printf("Начинается выполнение программы!\n");
}

void show(int n) {
    int k;

    for (k = 1; k <= n; k++) {
        printf("%d ", k);
    }

    printf("\n");
}

double getNumber(unsigned int a, unsigned int b) {
    double x, y;

    x = a;
    y = b;

    while (y >= 1) {
        y /= 10;
    }

    return x + y;
}

int main(void) {
    hello();

    show(10);

    unsigned int m = 12, n = 345;

    double res;

    res = getNumber(m, n);

    printf("Исходные целые числа: %u и %u\n", m, n);
    printf("Получилось число: %f\n", res);

    return 0;
}
