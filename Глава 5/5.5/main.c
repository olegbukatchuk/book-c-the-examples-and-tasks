#include <stdio.h>
#include <stdlib.h>

/* Описание структуры */
struct MyMoney {
    double money;
    double rate;
    int time;
};

/* Функция для вычисления итоговой суммы по вкладу */
double getMoney(struct MyMoney obj)
{
    int k;

    /* Переменная для записи результата */
    double s = obj.money;

    /* Вычисление результата */
    for (k = 1; k <= obj.time; k++)
        s *= (1 + obj.rate / 100);

    return s;
}

/* Функция для отображения значений полей экземпляра структуры и итоговой суммы по вкладу */
void show(struct MyMoney obj)
{
    printf("Начальная сумма: %.2f\n", obj.money);
    printf("Процентная ставка: %.2f\n", obj.rate);
    printf("Время вклада: %d\n", obj.time);
    printf("Итоговая сумма: %.2f\n", getMoney(obj));
}

int main(void)
{
    /* Создание и инициализация экземпляров структуры */
    struct MyMoney objA = {1000, 12.5, 3};
    struct MyMoney objB = {800, 12, 5};

    /* Отображение значений полей экземпляров структуры и итоговох сумм по вкладам */
    show(objA);
    printf("\n");
    show(objB);

    return 0;
}