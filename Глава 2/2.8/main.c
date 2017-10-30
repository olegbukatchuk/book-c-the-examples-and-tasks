#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Кусочно-гладкая функция */
double f(double x)
{
    switch (x < -1) {
        case 1:
            return 0;
        case 0:
            switch (x < 0) {
                case 1:
                    return 1 - x * x;
                case 0:
                    switch (x < 2) {
                        case 1:
                            return 1;
                        default:
                            return exp(2 - x);
                    }
            }
    }
}

int main(void)
{
    printf("x\t| f(x)\n");

    printf("-------------\n");

    /* Переменная цикла */
    double x;

    for (x = -1.75; x < 5; x = x + 0.5)
        printf("%.2f\t| %.4f\n",x,f(x));

    return 0;
}