//
// Created by Oleg Bukatchuk on 19/10/2017.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int n=10;

    int k=1,s=0;

    start:

    s+=2*k-1;
    k++;

    if (k<=n) {

        goto start;

    }

    printf("1+3+5+...+%d=%d\n",2*n-1,s);

    return 0;
}