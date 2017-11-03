#include <stdio.h>
#include <stdlib.h>

/* Описание структур */
struct MyStruct {
    /* Символьное поле */
    char code;
    /* Поле - указатель на экземпляр структуры */
    struct MyStruct *next;
};

/* Функция для создания цепочки экземпляров */
struct MyStruct *create(int n)
{
    /* Первый экземпляр в цепочке экземпляров структуры */
    struct MyStruct *start = malloc(sizeof(struct MyStruct));

    /* Значение символьного поля первого экземпляра в цепочке */
    start->code = 'A';

    printf("Создан первый экземпляр с полем %c\n", start->code);

    /* Объявление указателей на экземпляр структуры */
    struct MyStruct *p, *q;

    /* Значение указателя */
    p = start;

    /* Индексная переменная */
    int k;

    /* Создание цепочки экземпляров */
    for (k = 2; k < n; k++) {
        /* Создание нового экземпляра в цепочке */
        q = malloc(sizeof(struct MyStruct));

        /* Значение символьного поля созданного экземпляра */
        q->code = p->code + 1;

        /*
         * Адрес созданного экземпляра присваивается значением полю next предыдущего
         * экземпляра в цепочке.
         */
        p->next = q;

        printf("Создан экземпляр с полем %c\n", q->code);

        /* Новое значение для указателя */
        p = q;
    }

    /* Значение поля next последнего экземпляра в цепочке */
    p->next = 0;

    return start;
}

/* Функция для удаления цепочки объектов */
void delete(struct MyStruct *start) {
    /* Указатель на следующий экземпляр в цепочке */
     struct MyStruct *p = start->next;

    /* Если следующий экземпляр - не последний */
    if (p != 0)
        delete(p);  /* Вызов функции для удаления следующего экземпляра в цепочке */

    printf("Удалён экземпляр с полем %c\n", start->code);

    /* Удаление экземпляра */
    free(start);
}

/* Функция для отображения полей экземпляров в цепочке */
void show(struct MyStruct *start)
{
    /* Отображение значения символьного поля для каждого элемента в цепочке */
    while (start) {
        printf("Поле code: %c\n", start->code);
        /* Указатель н следующий экземпляр */
        start = start->next;
    }
}

int main(void)
{
    /* Указатель на экземпляр структуры */
    struct MyStruct *pnt;
    puts("Создаётся цепочка экземпляров структуры MyStruct");

    /* Создаётся цепочка экземпляров */
    pnt = create(5);
    puts("Значение поля code экземпляров, начиная с 1-го:");

    /* Отображается значение поля code для экспериментов в цепочке, начиная со второго */
    show(pnt->next);
    puts("Удаление экземпляров:");

    /* Удаление цепочки объектов */
    delete(pnt);

    return 0;
}