//
// Created by Oleg Bukatchuk on 15/10/2017.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int k = 0, C = 1;

    printf("Введите целое число: ");
    scanf("%d", &n);

    printf("|");

    do {
        printf(" %d |", C);
        C = C * (n - k) / (k + 1);
        k++;
    } while (k <= n);

    printf("\n");

    return 0;
}