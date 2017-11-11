#include <stdio.h>
#include <stdlib.h>

/* Структура с битовыми полями */
struct MyBits {
    unsigned int first: 1;
    unsigned int second: 1;
    unsigned int third: 4;
    unsigned int last: 2;
};

int main(void)
{
    /* Экземпляр структуры с битовыми полями */
    struct MyBits obj;

    /* Присваивание значений битовым полям */
    obj.first = 1;
    obj.second = 0;
    obj.third = 15;
    obj.last = 3;

    /* Отображение значений битовых полей */
    printf("Поле first: %d\n", obj.first);
    printf("Поле second: %d\n", obj.second);
    printf("Поле third: %d\n", obj.third);
    printf("Поле last: %d\n", obj.last);

    return 0;
}