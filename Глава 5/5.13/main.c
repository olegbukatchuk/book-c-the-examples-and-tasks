#include <stdio.h>
#include <stdlib.h>

/* Внешняя структура */
struct Bravo {
    /* Внутренняя структура */
    struct Alpha {
        char symbol;
        int number;
    } obj; /* Поле внешней структуры */
    char name[100];
    int number;
};

/* Функция для отображения значений полей экземпляра структуры Alpha */
void showA(struct Alpha a)
{
    printf("Поле symbol: %c\n", a.symbol);
    printf("Поле number: %d\n", a.number);
}

/* Функция для отображения значений полей экземпляра структуры Bravo */
void showB(struct Bravo b)
{
    showA(b.obj);
    printf("Поле name: %s\n", b.name);
    printf("Поле number: %d\n", b.number);
}

int main(void)
{
    /* Экземпляр внутренней структуры Alpha */
    struct Alpha A = {'A', 100};

    puts("Экземпляр внутренней структуры Alpha:");

    /* Отображение значений полей экземпляра внутренней структуры */
    showA(A);

    /* Создание и инициализация экземпляра структуры Bravo */
    struct Bravo B = {
            {'B',200},
            "Bravo",
            300
    };

    puts("Экземпляр внешней структуры Bravo:");

    /* Отображение значения полей экземпляра */
    B.obj.symbol = 'C';
    B.obj.number = 400;
    B.number = 500;

    puts("После изменения значений полей:");

    showB(B);

    return 0;
}