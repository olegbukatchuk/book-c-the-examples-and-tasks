#include <stdio.h>
#include <stdlib.h>

/* Описание структуры */
struct Book {
    char author[100];
    char title[100];
    int pages;
};

/* Функция для отображения значений полей экземпляра структуры */
void show(struct Book b)
{
    printf("Автор: %s\n", b.author);
    printf("Название: %s\n", b.title);
    printf("Страниц: %d\n", b.pages);
    printf("-------------------------\n");
}

int main(void)
{
    /* Объявление экземпляра структуры */
    struct Book writer;

    /* Присваивание значения экземпляру (использовани анонимный эекземпляр структуры) */
    writer = (struct Book) {{"Жюль Верн"}, "Дети капитана Гранта", 640};

    /* Отображение значений полей экземпляра */
    show(writer);

    /* Отображение значений полей анонимного экземляра */
    show((struct Book){"Антон Чехов", "Вишнёвый сад", 192});

    return 0;
}