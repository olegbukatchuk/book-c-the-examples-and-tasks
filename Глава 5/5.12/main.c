#include <stdio.h>
#include <stdlib.h>

/* Первая структура */
struct Alpha {
    char symbol;
    int number;
};

/* Вторая структура */
struct Bravo {
    /* Поле является экземпляром структуры Alpha */
    struct Alpha obj;
    char name[100];
    int number;
};

/* Функция для отбражения значений полей экземпляра структуры Alpha */
void showA(struct Alpha a)
{
    printf("Поле symbol: %c\n", a.symbol);
    printf("Поле number: %d\n", a.number);
}

/* Функция для отображения значений полей экземпляра структуры Bravo */
void showB(struct Bravo b)
{
    /*
     * Вызов функции для отображение значения полей экземпляра структуры Alpha,
     * являющегося полем экземпляра структуры Bravo.
     */
    showA(b.obj);

    printf("Поле name: %s\n", b.name);
    printf("Поле number: %d\n", b.number);
}

int main(void)
{
    /* Создание и инициализация экземпляра структуры Bravo */
    struct Bravo B = {{'A', 100}, "Bravo", 200};

    /* Отображение значений полей экземпляра */
    showB(B);

    /* Изменение значений полей экземпляра */
    B.obj.symbol = 'B';
    B.obj.number = 0;
    B.number = 300;

    puts("После изменения значений полей:");

    /* Отображение значений полей */
    showB(B);

    return 0;
}
