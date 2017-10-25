//
// Created by Oleg Bukatchuk on 25/10/2017.
//

// Динамическое выделение памяти
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int *p;
    char *q;
    double *r;

    // Динамическое выделение памяти
    p=malloc(sizeof(int));
    q=malloc(sizeof(char));
    r=malloc(sizeof(double));

    *p=100;
    *q='D';
    *r=1.234567;

    printf("%d\n",*p);
    printf("%c\n",*q);
    printf("%f\n",*r);

    // Освобождаем память

    free(p);
    free(q);
    free(r);

    return 0;

}