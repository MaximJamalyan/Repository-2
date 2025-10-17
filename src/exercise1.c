#include <stdio.h>

int main() {
    double array[10];
    double sum = 0;
    printf("Введите 10 чисел : ");
    for(int i = 0; i < 10; i++) {
        scanf("%lf", &array[i]);
        sum += array[i];
    }
    
    printf("%.2f\n", sum / 10);
    return 0;

}
