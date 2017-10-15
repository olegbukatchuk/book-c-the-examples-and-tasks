//
// Created by Oleg Bukatchuk on 15/10/2017.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const int n = 12;
    int nums[n];
    int k;

    for (k = 0; k < n; k++) {
        nums[k] = 2 * k + 1;
        printf("%d ", nums[k]);
    }

    printf("\n");

    return 0;
}