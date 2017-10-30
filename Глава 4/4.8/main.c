#include <stdio.h>

/* Передача аргументом двумерного динамического массива */
void show(char** A,int m,int n)
{
    int i, j;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%c ", A[i][j]);
        }

        printf("\n");
    }
}

/* Функция для заполнения буквами двумерного динамического массива */
void set(char** A, int m, int n)
{
    /* Индексные перменные и переменная-счётчик */
    int i, j, count = 0;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            /* Присваивание значения элементу массива */
            A[i][j] = 'A' + count;
            count++;
        }
    }
}

int main(void)
{
    /* Индексная переменная */
    int k;

    /* Размеры для первого массива */
    int Ma = 3, Na = 5;

    /* Размеры для второго массива */
    int Mb = 4, Nb = 6;

    /* Одномерные динамические массивы уазателей */
    char **A = malloc(Ma * sizeof(char*));
    char **B = malloc(Mb * sizeof(char*));

    /* Создание первого двумерного массива */
    for (k = 0; k < Ma; k++)
        A[k] = malloc(Na * sizeof(char));

    /* Создание второго двумерного массива */
    for (k = 0; k < Mb; k++)
        B[k] = malloc(Nb * sizeof(char));

    /* Заполнение массовов буквами */
    set(A, Ma, Na);
    set(B, Mb, Nb);

    printf("Массив A:\n");
    show(A, Ma, Na);

    printf("Массив B:\n");
    show(B, Mb, Nb);

    printf("Левая верхняя четверть массива B:\n");
    show(B, Mb / 2, Nb / 2);

    printf("Левая нижняя часть массива В:\n");
    show(B + Mb / 2, Mb / 2, Nb / 2);

    return 0;
}