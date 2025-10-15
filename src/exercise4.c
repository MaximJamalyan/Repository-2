#include <stdio.h>

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("Использование: ./exercise4 X K\n");
        return 1;
    }

    double X;
    int K;
    sscanf(argv[1], "%lf", &X);
    sscanf(argv[2], "%d", &K);

    double array[10];
    printf("Введите десять вещественных чисел:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &array[i]);
    }

    for (int i = 9; i > K; i--) {
        array[i] = array[i - 1];
    }
    array[K] = X;

    printf("Новый массив:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2lf ", array[i]);
    }
    printf("\n");

    return 0;
}
