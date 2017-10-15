//
// Created by Oleg Bukatchuk on 15/10/2017.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    double x = 1;
    double s = 0, q = 1;

    int k, n = 8;
    for (k = 0; k <= n; k++) {
        s += q;
        q *= x / (k + 1);
    }

    printf("Вычисленное значение: exp(%.1f)=%f\n", x, s);
    printf("Констрольное значение: exp(%.1f)=%f\n", x, exp(x));

    return 0;
}