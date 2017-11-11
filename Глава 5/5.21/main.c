#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Структура для реализации векторов */
struct Vector {
    double x;
    double y;
    double z;
};

/* Функция для вычисления суммы векторов */
struct Vector vsum(struct Vector A, struct Vector B)
{
    struct Vector C;

    C.x = A.x + B.x;
    C.y = A.y + B.y;
    C.z = A.z + B.z;

    return C;
}

/* Функция для вычисления результата произведения вектора на число */
struct Vector vmult(struct Vector A, double r)
{
    struct Vector C;

    C.x = A.x * r;
    C.y = A.y * r;
    C.z = A.z * r;

    return C;
}

/* Функция для вычисления скалярного произведения векторов */
double sprod(struct Vector A, struct Vector B)
{
    return A.x * B.x + A.y * B.y + A.z * B.z;
}

/* Функция для вычисления векторного произведения векторов */
struct Vector vprod(struct Vector A, struct Vector B)
{
    struct Vector C;

    C.x = A.y * B.z - A.z * B.y;
    C.y = A.z * B.x - A.x * B.z;
    C.z = A.x * B.y - A.y * B.x;

    return C;
}

/* Функция для вычисления модуля вектора */
double vabs(struct Vector A)
{
    return sqrt(A.x * A.x + A.y * A.y + A.z * A.z);
}

/* Функция для отображения координат фектора */
void show(struct Vector A)
{
    printf("(%.4.1f;%.4.1f;%.4.1f)", A.x, A.y, A.z);
}

int main(void)
{
    /* Создание экземпляров структуры */
    struct Vector A = {1, -1, 3};
    struct Vector B = {2, 1, -1};
    struct Vector C;

    /* Отображение векторов */
    printf("Вектор A: ");
    show(A);

    printf("\nВектор B: ");
    show(B);

    /* Сумма векторов */
    C = vsum(A, B);

    printf("\nВектор A + B: ");
    show(C);

    /* Произведение вектора на число */
    C = vmult(A, 3);

    printf("\nВектор 3A: ");
    show(C);

    /* Скалярное произведение вектора */
    printf("\nСкалярное произведение AB: %.1f", sprod(A, B));

    /* Векторное произведение */
    C = vprod(A, B);

    printf("\nВекторное произведение AB: ");
    show(C);

    /* Модуль вектора */
    printf("\nМодуль вектора A: %.2f\n", vabs(A));
    printf("Модуль вектора B: %.2f\n", vabs(B));

    return 0;
}