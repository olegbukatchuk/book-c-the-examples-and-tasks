#include <stdio.h>
#include <stdlib.h>

int value(int n)
{
    return n * (n + 1) / 2;
}

struct MyComplex {
    double re;
    double im;
};

int main(void)
{
    /* Синоним для структуры */
    typedef struct MyComplex COMPLEX;

    /* Синоним для анонимной структуры */
    typedef struct {int code;} MYNUM;

    /* Синоним для указателя на функцию */
    typedef int (*MYFUNC)(int);

    /* Синоним для указателя на целочисленный массив из 3 элементов */
    typedef int (*ARRAY)[3];

    /* Экземпляр структуры */
    COMPLEX z = {1, 2};

    /* Ещё один экземпяр структуры */
    COMPLEX q;

    /* Присваивание экземпляров структуры */
    q = z;

    printf("Комплексное число: (%.1f;%.1f)\n", q.re, q.im);

    /* Экземпляр анонимной структуры */
    MYNUM A = {100};

    /* Ещё один экземпляр структуры */
    MYNUM B;

    /* Присваивание экземпляров */
    B = A;

    printf("Целое число: %d\n", B.code);

    /* Указатель на функцию */
    MYFUNC f;

    /* Значение указателя на функцию */
    f = value;
    printf("Результат функции:%d\n", f(10));

    /* Двумерный массив */
    ARRAY nums = (int[2][3]){{1, 2, 3}, {4, 5, 6}};

    int i, j;

    /* Отображение содержимого массива */
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", nums[i][j]);
        printf("\n");
    }

    return 0;
}