//
// Created by Oleg Bukatchuk on 15/10/2017.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    printf("Введите номер числа: ");
    scanf("%d", &n);

    int a = 1, b = 1;
    int k = 3;

    while (k <= n) {
        b = a + b;
        a = b - a;
        k++;
    }

    printf("Число Фибоначчи: %d\n", b);

    return 0;
}