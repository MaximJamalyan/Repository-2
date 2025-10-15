
#include <stdio.h>

int main(void) {
    double array[10];

    printf("Введите десять вещественных чисел:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &array[i]);
    }

    printf("Инвертированный массив:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%.2lf ", array[i]);
    }

    printf("\n");
    return 0;
}
