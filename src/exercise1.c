#include <stdio.h>
int main(void) {
    double array[10];
    double sum = 0;
    printf("Введите десять вещественных чисел:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &array[i]);
        sum += array[i];
    }

    printf("Среднее арифметическое: %.2lf\n", sum / 10.0);
    return 0;
}

