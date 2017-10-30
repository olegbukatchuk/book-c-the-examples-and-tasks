#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Кусочно-гладкая функция */
double f(double x)
{
    if (x<-1)
        return 0;

    if (x<0)
        return 1-x*x;

    if (x<2)
        return 1;
    else
        return exp(2-x);
}

int main(void)
{
    printf("x\t| f(x)\n");

    printf("---------------------\n");

    double x;

    for (x = -1.75; x < 5; x = x + 0.5)
        printf("%.2f\t| %.4f\n",x,f(x));

    return 0;
}