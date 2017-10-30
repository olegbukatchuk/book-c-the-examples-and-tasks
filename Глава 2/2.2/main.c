#include <stdio.h>
#include <stdlib.h>

void findRoot(int A, int B)
{
    printf("Решение уравнения Ax=B при A=%d и B=%d\n",A,B);

    if (A && !(B % A)) {
        printf("Целочисленное решение x=%d\n", B / A);
        return;
    }

    if (!A && !B) {
        printf("Решение - любое целое число\n");
        return;
    }

    printf("Целочисленных решений нет\n");
}

int main(void)
{
    findRoot(3,12);
    findRoot(3,13);
    findRoot(0,12);
    findRoot(0,0);

    return 0;
}