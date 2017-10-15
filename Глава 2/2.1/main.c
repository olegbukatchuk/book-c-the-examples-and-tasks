//
// Created by Oleg Bukatchuk on 15/10/2017.
//

#include <stdio.h>
#include <stdlib.h>

// Решение линейного уравнения
void findRoot(int A,int B) {

    // Параметры уравнения
    printf("Решение уравнения Ax=B при A=%d и B=%d\n",A,B);

    // Решение
    if (A&&!(B%A)) {

        printf("Целочисленное решение x=%d\n",B/A);

    } else {

        // Оба параметра уравнения - нулевые
        if (!A&&!B) {

            printf("Решение - любое целое число\n");

        } else {

            // Решений на множестве целых чисел нет
            printf("Целочисленных решений нет\n");

        }

    }

}

int main(void) {

    // Поиск целочисленного решения линейного уравнения
    findRoot(3,12);
    findRoot(3,13);
    findRoot(0,12);
    findRoot(0,0);

    return 0;

}