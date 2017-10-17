//
// Created by Oleg Bukatchuk on 17/10/2017.
//

#include <stdio.h>
#include <stdlib.h>

// Функция для определения названия дня по его номеру
void findDay(int num) {

    printf("Номер дня в неделе: %d\n",num);

    printf("День недели: ");

    //
    char *names[8]={"понедельник","вторник","среда","четверг","пятница","суббота","воскресенье","нет такого дня"};

    //
    if ((num>=1)&&(num<=7)) {

        printf("%s\n",names[num-1]);

    } else {

        printf("%s\n",names[7]);

    }

}

int main(void) {

    int k;

    //
    for (k=0;k<=8;k++) {

        findDay(k);

    }

    return 0;

}