#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Описание структуры */
struct Point2D {
    double x;
    double y;
};

/* Функция для отображения значений полей экземпляра структуры */
void show(struct Point2D obj)
{
    printf("(%.2f;%.2f)", obj.x, obj.y);
}

/* Функция для вычисления расстояния между точками */
double dist(struct Point2D A, struct Point2D B)
{
    return sqrt(pow(B.x - A.x, 2) + pow(B.x - A.y, 2));
}

/* Функция для вычисления длинны ломанной линий */
double length(struct Point2D *pts, int n)
{
    /* Переменная для записи значения длинны ломанной линии */
    double s = 0;

    /* Индексная переменная */
    int k;

    /* Вычисление длины ломанной линии */
    for (k = 1; k < n; k++)
        s += dist(pts[k - 1], pts[k]);

    return s;
}

int main(void)
{
    /* Индексная переменная */
    int k;

    /* Массив из экземпляров структуры (Объявление и инициализация) */
    struct Point2D points[5] = {{0,0}, {0,3}, {5,3}, {5,0}, {0,0}};

    printf("Координаты точек прямоугольника:\n");

    /*
     * Отображение значений полей экземпляров структуры, являющихся элементами массива.
     */
    for (k = 0; k < 5; k++) {
        show(points[k]);
        printf(" ");
    }

    printf("\nПериметр прямоугольника: %.2f\n", length(points, 5));

    return 0;
}