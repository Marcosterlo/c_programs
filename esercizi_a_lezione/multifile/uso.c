#include <stdio.h>
#include "calcolo.h"

int main() {
    int esci=1, scelta;
    float a, b;
    do {
        printf("Inserire due numeri: ");
        scanf("%f %f", &a, &b);
        printf("Inserire l'operazione desiderata:\n1) Somma\n2) Differenza\n3) Prodotto\n4) Divisione\n");
        scanf("%d", &scelta);
        switch (scelta) {
            case (1):
                printf("La somma è %.2f\n", somma(a, b));
                break;
            case (2):
                printf("La differenza è %.2f\n", differenza(a, b));
                break;
            case (3):
                printf("Il prodotto è %.2f\n", prodotto(a, b));
                break;
            case (4):
                printf("La divisione è %.2f\n", divisione(a, b));
                break;
        }
        printf("Eseguire un'altra operazione? (1 per si 0 per no) ");
        scanf("%d", &esci);
    } while (esci);
    return 0;
}