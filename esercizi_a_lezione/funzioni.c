//test sulla visibilità
#include <stdio.h>

int f(double x);

int main() {
    double x;
    printf("Inserire il valore di x: ");
    scanf("%lf", &x);
    for (int i=0; i<5; i++) {
        int n = i;
        printf("%d ", n);
        //la variabile n muore a ogni cico di for
    }
    printf("X convertito a intero è: %d\n", f(x));
    return 0;
}

int f(double x) {
    return (int) x;
}