#include <stdio.h>

double media(double *v, int len);

#define MAXS 50

int main() {
    int n1, n2;
    double v1[MAXS], v2[MAXS];
    printf("Inserire la lunghezza del primo vettore: ");
    scanf("%d", &n1);
    printf("Inserire la lunghezza del secondo vettore: ");
    scanf("%d", &n2);
    printf("\n");
    for (int i=0; i<n1; i++) {
        printf("Inserire il valore del %do numero: ", i+1);
        scanf("%lf", &v1[i]);
    }
    printf("\n");
     for (int i=0; i<n2; i++) {
        printf("Inserire il valore del %do numero: ", i+1);
        scanf("%lf", &v2[i]);
    }
    printf("\n");
    printf("La media del primo vettore è %.2lf, la media del secondo vettore è %.2lf\n", media(v1, n1), media(v2, n2));
    return 0;
}

double media(double *v, int n) {
    double med=0;
    for (int i=0; i<n; i++) {
        med+=v[i];
    }
    return med/n;
}