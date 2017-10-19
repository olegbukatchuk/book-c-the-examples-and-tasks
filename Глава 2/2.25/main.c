//
// Created by Oleg Bukatchuk on 19/10/2017.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int n=10;

    printf("Сумма %d нечётных чисел равна ",n);

    int k,q,s;

    for (k=1,q=1,s=0;k<=n;s+=q,k++,q+=2);

    printf("%d\n",s);

    return 0;

}
