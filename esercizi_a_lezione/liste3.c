#include <stdio.h>
#include <stdlib.h>
#include "funzionil.h"

int main() {
    int scelta, posto, esci=1;
    Nodo head=NULL;
    do {
        printf("*******\nSelezionare l'operazione\n1) Aggiungere alla testa\n2) Aggiungere alla coda\n3) Rimuovere dalla testa\n");
        printf("4) Rimuovere dalla coda\n5) Elimina lista\n");
        //printf("6) Aggiungi elemento\n");
        printf("*******\n");
        scanf("%d", &scelta);
        switch (scelta) {
            case (1):
                head=AddToHead(head);
                Display(head);
                break;
            case (2):
                head=AddToTail(head);
                Display(head);
                break;
            case (3):
                head=RemoveFromHead(head);
                Display(head);
                break;
            case (4):
                RemoveFromTail(head);
                Display(head);
                break;
            case (5):
                head=ClearAll(head);
                break;
            /*case (6):
                head=AddElement(head);
                Display(head);
                break;*/
        }
        printf("Fare altro? (1=si 0=no) ");
        scanf("%d", &esci);
    } while (esci);
    ClearAll(head);
    printf("\n\n%d\n\n", x);
    return 0;
}