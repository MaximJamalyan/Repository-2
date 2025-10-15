#include <stdio.h>

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Использование: ./exercise3 K\n");
        return 1;
    }

    int k;
    sscanf(argv[1], "%d", &k);

    double array[10];
    printf("Введите десять вещественных чисел:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &array[i]);
    }

    double result[10];
    k = k % 10;
    if (k < 0) k += 10;

    for (int i = 0; i < 10; i++) {
        result[(i + k) % 10] = array[i];
    }

    printf("Результат сдвига:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2lf ", result[i]);
    }
    printf("\n");

    return 0;
}
