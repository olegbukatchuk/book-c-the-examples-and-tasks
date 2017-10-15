//
// Created by Oleg Bukatchuk on 15/10/2017.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Номер числа в последовательности Фибоначчи
    int n;

    printf("Введите номер числа: ");
    scanf("%d",&n);

    // Первое и второе число в последовательности
    int a=1,b=1;

    // Переменная для оператора цикла
    int k=3;

    // Считаем значение для числа в ряде Фибоначчи
    while (k<=n) {
        b=a+b;
        a=b-a;
        k++;
    }

    printf("Число Фибоначчи: %d\n",b);

    return 0;

}