#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Размер (в байтах) для типов данных:\n\n");
    printf("Тип данных int: \t%lu\n", sizeof(int));
    printf("Тип данных char: \t%lu\n", sizeof(char));
    printf("Символьный литерал \'A\':\t%lu\n", sizeof('A'));
    printf("Тип данных float:\t%lu\n", sizeof(float));
    printf("Тип данных double:\t%lu\n", sizeof(double));
    printf("Текст \"мой текст\":\t%lu\n", sizeof("мой текст"));

    return 0;
}