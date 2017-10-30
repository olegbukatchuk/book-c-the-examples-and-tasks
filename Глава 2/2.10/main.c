#include <stdio.h>
#include <stdlib.h>

/* Функция для решения линейного уравнения на множестве целых чисел */
void findRoot(int A, int B)
{
    printf("Решение уравнения Ax=B при A=%d и B=%d\n", A, B);

    if (A) {
        switch (B % A) {
            case 0:
                printf("Целочисленное решение x=%d\n", B / A);
                break;
            default:
                printf("Целочисленных решений нет\n");
        }
    } else {
        switch (B) {
            case 0:
                printf("Решение - любое целое число\n");
                break;
            default:
                printf("Решений нет\n");
        }
    }
}

int main(void)
{
    findRoot(3,12);
    findRoot(3,13);
    findRoot(0,12);
    findRoot(0,0);

    return 0;
}