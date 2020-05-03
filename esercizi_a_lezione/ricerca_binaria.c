//Ricerca dicotomica o binaria
#include <stdio.h>

#define MAXS 50

int main() {
    int j, tmp, inf=0, sup, a[MAXS], val, n, i, m, pos=-1;
    printf("Inserire quanti valori inserire: ");
    scanf("%d", &n);
    //Inserimento valori
    for (i=0; i<n; i++) {
        printf("Inserire il %do valore: ", i+1);
        scanf("%d", &a[i]);
    }
    //Ordinamento vettore
    for (i=0; i<n-1; i++) {
        for (j=i; j<n; j++) {
            if (a[i]>a[j]) {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    printf("Inserire il valore da cercare: ");
    scanf("%d", &val);
    sup=n-1;
    do {
        m=(inf+sup)/2;
        if (val==a[m]) {
            pos=m;
            break;
        }
        else if (val>a[m]) {
            inf=m+1;
        }
        else 
            sup=m-1;        
    } while (inf<=sup && pos==-1);
    printf("\n%d\n", pos);
    return 0;
}