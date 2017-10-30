#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Функция для решения квадратного уравнения на множестве комплексных чисел */
void solve(double a)
{
    printf("Решается уравнение x*x-4*x+%.2f=0\n", a);

    /* Идентификация типа решения */
    int res = (a == 4) ? 1 : (a < 4) ? 2 : 3;

    switch (res) {
        case 1:
            printf("Решение уравнения: 2\n");
            break;
        case 2:
            printf("Первый корень: %.2f\n", 2 - sqrt(4 - a));
            printf("Второй корень: %.2f\n", 2 + sqrt(4 - a));
            break;
        case 3:
            printf("Первый корень: 2-%.2fi\n", sqrt(a - 4));
            printf("Второй корень: 2+%.2fi\n", sqrt(a - 4));
    }
}

int main(void)
{
    /* Решение */
    solve(4);
    solve(3);
    solve(5);

    return 0;
}