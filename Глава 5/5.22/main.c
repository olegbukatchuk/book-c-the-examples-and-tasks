#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Описание структуры с помощью котрой реализуются комплексные числа */
struct MyComplex {
    /* Действительная часть комплексного числа */
    double re;

    /* Мнимая часть комплексного числа */
    double im;
};

/* Функция для вычисления суммы двух комплексных чисел */
struct MyComplex cSum(struct MyComplex a, struct MyComplex b)
{
    /* Локальный экземпляр структуры */
    struct MyComplex tmp;

    /* Вычисление действительной части */
    tmp.re = a.re + b.re;

    /* Вычисление мнимой части */
    tmp.im = a.im + b.im;

    return tmp;
}

/* Функция для вычисления произведения комплексных чисел */
struct MyComplex cProd(struct MyComplex a, struct MyComplex b)
{
    /* Локальный экземпляр структуры */
    struct MyComplex tmp;

    /* Вычисление действительной части */
    tmp.re = a.re * b.re - a.im * b.im;

    /* Вычисление мнимой части */
    tmp.im = a.re * b.im + a.im * b.re;

    return tmp;
}

/* Функция для вычиления произведения комплексного числа на действительное число */
struct MyComplex nProd(struct MyComplex a, double x)
{
    /* Локальный экземпляр структуры */
    struct MyComplex tmp;

    /* Вычисляем действительной части */
    tmp.re = a.re * x;

    /* Вычисление мнимой части */
    tmp.im = a.im * x;

    return tmp;
}

/* Функция для вычисления комплексной экпоненты */
struct MyComplex cExp(struct MyComplex a)
{
    /* Экземпляр для записи результата вычисления */
    struct MyComplex s = {0, 0};

    /* Экземпляр для записи значения добавки к сумме */
    struct MyComplex q = {1, 0};

    /* Индексная переменная и верхняя граница ряда */
    int k, n = 100;

    /* Вычисление суммы комплексного ряда */
    for (k = 0; k <= n; k++) {
        /* Прибавление слагаемого к сумме */
        s = cSum(s, q);

        /* Вычисление добавки для следующего числа */
        q = nProd(cProd(q, a), 1.0 / (k + 1));
    }

    return s;
}

/* Функция для отображения значений полей экземпляра структуры (значения действительной и мнимой части) */
void show(struct MyComplex a)
{
    printf("(%f;%f)", a.re, a.im);
}

int main(void)
{
    /* Действительная и мнимая части для аргумента экспоненты */
    double x = 1, y = 2;

    /* Экземпляр структуры MyComplex */
    struct MyComplex z = {x, y}; // Аргументы для экспоненты
    struct MyComplex r;          // Экспонента

    /* Значение экспоненты */
    r = cExp(z);

    /* Контрольное значение */
    struct MyComplex t = {exp(x) * cos(y), exp(x) * sin(y)};

    /* Отображение результата */
    printf("Значение аргумента:\t");
    show(z);

    printf("\nЗначение экспоненты:\t");
    show(r);

    printf("\nКонтрольное значение:\t");
    show(t);

    printf("\n");

    return 0;
}

