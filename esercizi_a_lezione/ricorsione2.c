#include <stdio.h>

int somma_ric(int *, int);
int vettlen(int *);

int main() {
    int a[80], n;
    printf("Quanti numeri inserire nel vettore? ");
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        printf("Inserire il %do valore: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("La somma degli elementi del vettore è %d\n", somma_ric(a, n));
    return 0;
}

int somma_ric(int *a, int n) {
    if (n==0) {
        return 0;
    }
    else 
        return a[n-1]+somma_ric(a, n-1);
}

int vettlen(int *a) {
    int i=0;
    while (a[i]!=NULL) 
        i++;
    return i;
}
//Off-topic: un modo per ottenere la dimensione di un array non di caratteri si può fare così:
//int a[]={1, 2, 3, 4, 5, 6};
//int b=sizeof(a)/sizeof(a[0]);  -->  si ottiene la dimensione totale dell'array fratto la dimensione di uno dei suoi elementi
// in questo caso b=6