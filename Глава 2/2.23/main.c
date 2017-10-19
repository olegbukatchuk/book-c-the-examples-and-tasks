//
// Created by Oleg Bukatchuk on 19/10/2017.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int n=10;

    int s;

    for (s=0;n;n--) {

        s+=2*n-1;

    }

    printf("%d\n",s);

    return 0;

}