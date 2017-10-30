#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    /* Число Пи */
    const double pi = 3.141592;

    /* Порядок корня */
    int n = 5;

    /* Индекс для нумерации решения */
    int k = 0;

    /* Действительная и мнимая части исходного числа */
    double x = 3, y = 4;

    /* Переменные для записи результатов промежуточных вычислений */
    double r, phi, arg;

    /* Вычисление значений параметров */
    r = pow(x * x + y * y, 0.5 / n);
    phi = atan2(y, x);

    /* Вывод исходного числа */
    printf("Re(z) = %.3f\tIm(z) = %.3f\n", x, y);

    printf("Результат вычисления корня степени %d:\n", n);
    printf("k\t Re\t Im\n");

    while (k < n) {
        /* Аргумент для тригонометрических функций */
        arg = (phi + 2 * pi * k);
        printf("%d\t%.3f\t%.3f\n", k, r * cos(arg), r * sin(arg));
        k++;
    }

    return 0;
}