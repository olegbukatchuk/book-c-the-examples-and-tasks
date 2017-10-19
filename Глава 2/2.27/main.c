//
// Created by Oleg Bukatchuk on 19/10/2017.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void solve(double A,double B,double C) {

    printf("Решение квадратного уравнения A*x*x+B*x+C=0\n");

    printf("Значение параметров: A=%.2f, B=%.2f, C=%.2f\n",A,B,C);

    double D;

    if (A==0) {

        printf("Решается линейное уравнение\n");

        if (B!=0) {

            printf("Решение уравнения: %.2f\n",-C/B);

        } else {

            if (C==0) {

                printf("Решено - любое число\n");

            } else {

                printf("Решений нет\n");

            }

        }

    } else {

        printf("Решается квадратное уравнение\n");

        D=B*B-4*A*C;

        if (D<0) {

            printf("Действительных решений нет\n");

        } else {

            if (D==0) {

                printf("Решение уравнения: %.2f\n",-B/A/2);

            } else {

                printf("Первый корень уравнения: %.2f\n", -(B+sqrt(D))/A/2);

                printf("Второй корень уравнения: %.2f\n", -(B-sqrt(D)/A/2));

            }

        }

    }

}

int main(void) {

    solve(2,-3,1);
    solve(4,12,9);
    solve(1,2,2);
    solve(0,5,3);
    solve(0,0,1);
    solve(0,0,0);

    return 0;

}