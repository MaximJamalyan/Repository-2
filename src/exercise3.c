
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int g = atoi(argv[1]);
    float num[10];
    for(int i=0; i<10; i++) {
        scanf("%f", &num[i]);
    }
    g = g%10;
    if (g<0) {
        g+=10;
    }
    for(int i = 0; i<10; i++){
        int index = (10 - g +i) %10;
        printf("%.3lf\n", num[index]);        
    }
}
