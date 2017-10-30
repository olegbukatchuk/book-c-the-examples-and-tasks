#include <stdio.h>
#include <stdlib.h>

/* Создание динамического массива */
int main(void)
{
    /* Размер массива и индексная переменная */
    int n, k;

    printf("Укажите размер массива: ");
    scanf("%d", &n);

    /* Создание динамического массива */
    int *nums = malloc(n * sizeof(int));

    /* Инициализация генератора случайных чисел */
    srand(5);

    /* Заполнение массива случайными числами */
    for (k = 0; k < n; k++) {
        nums[k] = rand() % 10;
        printf("| %d ", nums[k]);
    }

    printf("|\n");

    /* Освобождаем память */
    free(nums);

    return 0;
}