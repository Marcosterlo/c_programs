#include <stdio.h>

#define MAXS 50

int main() {
    int n, a[MAXS]={0}, i, scambi=0, tmp, crescente, s;
    do {
        printf("Inserire il numero di interi da inserire nel vettore: ");
        scanf("%d", &n);
        for (i=0; i<n; i++) {
            printf("Inserire il %do valore: ", i+1);
            scanf("%d", &a[i]);
        }
        do {
            printf("Ordinare in senso crescente (1) o decrescente (0)? ");
            scanf("%d", &crescente);
        } while (crescente!=1 && crescente!=0);
        if (crescente) {
            do {
                scambi=0;
                for(i=0; i<n-1; i++) {
                    if (a[i]>a[i+1]) {
                        tmp=a[i];
                        a[i]=a[i+1];
                        a[i+1]=tmp;
                        scambi=1;
                    }
                }
            } while (scambi==1);
        }
        else {
            do {
                scambi=0;
                for(i=n-1; i>0; i--) {
                    if (a[i]>a[i-1]) {
                        tmp=a[i];
                        a[i]=a[i-1];
                        a[i-1]=tmp;
                        scambi=1;
                    }
                }
            } while (scambi==1);
        }
        printf("Il vettore ordinato è: ");
        for (i=0; i<n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
        printf("Ripetere il procedimento? (1=si, 0=no) ");
        scanf("%d", &s);
    } while (s!=0);
    return 0;
}