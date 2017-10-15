//
// Created by Oleg Bukatchuk on 15/10/2017.
//

#include <stdio.h>
#include <stdlib.h>

#define message() printf("Отображаются числа:\n");
#define numbers(n) int k;\
        for (k = 1; k <= (n); k++) {\
            printf("%d ", k);\
        }\
        printf("\n");

int main(void) {
    message();
    numbers(12);

    return 0;
}