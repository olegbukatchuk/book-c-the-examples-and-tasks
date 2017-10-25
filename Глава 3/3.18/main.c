//
// Created by Oleg Bukatchuk on 25/10/2017.
//

// Использование функции puts() и gets()
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Объявление символьного массива
    char str[100]="Мы изучаем язык С";

    puts(str);
    puts("Введите текст: ");
    gets(str);

    puts("Вы ввели такой текст: ");
    puts(str);

    return 0;

}