#include <stdio.h>
#include <stdlib.h>

/* Макроподстановки для идентификатора типа */
#define NUMBER  int
#define POINTER int*
#define STRING  char*
#define MYNUM   struct {int code;}
#define COMPLEX struct MyComplex

/* Описание структуры */
struct MyComplex {
    double re;
    double im;
};

int main(void)
{
    /* Целое число */
    NUMBER num;

    /* Указатель на целое число */
    POINTER pnt;

    /* Значение указателя */
    pnt = &num;

    /* Присваивание значения переменной через указатель */
    *pnt = 123;

    printf("Целое число: %d\n", num);

    /* Экземпляры структуры */
    COMPLEX z = {1, 2};
    COMPLEX q;
    q = z;

    printf("Комплексное число: (%.1f;%.1f)\n", q.re, q.im);

    /* Экземпляр анонимной структуры */
    MYNUM A = {100};

    /* Ещё один экземпляр анонимной структуры */
    MYNUM B;

    /* Значение поля экземпляра анонимной структуры */
    B.code = 200;

    printf("Целые числа %d и %d\n", A.code, B.code);

    /* Указатель на сомвольное значение */
    STRING text = "Изучаем язык C";
    puts(text);

    /* Ещё один указатель на символьное значение */
    STRING str;

    /* Присваивание значения указателю на символ */
    str = "C++ и C - разные языки";
    puts(str);

    return 0;
}