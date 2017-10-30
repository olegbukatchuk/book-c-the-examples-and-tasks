#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Кусочно-складочная функция */
double f(double x)
{
    /* Значение выражения для проверки в операторе выбора */
    int test = (x < -1) + (x < 0) + (x < 2);

    switch (test) {
        case 3:
            return 0;
        case 2:
            return 1 - x * x;
        case 1:
            return 1;
        default:
            return exp(2 - x);
    }
}

int main(void)
{
    printf("x\t| f(x)\n");

    printf("-------------\n");

    double x;

    for (x = -1.75; x < 5; x = x + 0.5)
        printf("%.2f\t| %.4f\n",x,f(x));

    return 0;
}