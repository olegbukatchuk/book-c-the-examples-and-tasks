/* Многоуровневая адресация */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double num;
    double *pnt;
    double **q;

    /* Присваивание значений указателям */
    pnt = &num;
    q = &pnt;

    printf("Адрес переменной num:\t%p\n", &num);
    printf("Адрес указателя pnt:\t%p\n", &pnt);
    printf("Адрес указателя q:\t%p\n", &q);
    printf("Проверка: %p = %p = %p\n", &num, pnt, *q);

    printf("Размер памяти для num:\t%d\n", sizeof(num));
    printf("Размер памяти для pnt:\t%d\n", sizeof(pnt));
    printf("Размер памяти для q:\t%d\n", sizeof(q));

    /* Указатель на указатель */
    **q = 1.234567;

    printf("Значение переменной num:\t%f\n", num);
    printf("Поверка: %f = %f = %f\n", num, *pnt, **q);

    return 0;
}