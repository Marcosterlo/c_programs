#include <stdio.h>
#include "funzioni.h"

int main() {
    Nodo head=NULL, *p=&head;
    int n, exit=1, scelta;
    do {
        printf("Inserire il numero corrispondente all'operazione desiderata:\n****\n1) Aggiungere alla testa\n2) Aggiungere alla coda\n");
        printf("3) Rimuovere la testa\n4) Rimuovere la coda\n5) Clear all\n6) Display\n7) Esci\n****\n");
        scanf("%d", &scelta);
        switch (scelta) {
            case 1: 
            printf("Inserire il valore del nodo: ");
            scanf("%d", &n);
            AddToHead(p, n);
            break;
            case 2:
            printf("Inserire il valore del nodo: ");
            scanf("%d", &n);
            AddToTail(p, n);
            break;
            case 3:
            RemoveFromHead(p);
            break;
            case 4:
            RemoveFromTail(p);
            break;
            case 5:
            ClearAll(p);
            break;
            case 6:
            Display(p);
            break;
            case 7:
            exit=0;
            break;
            default: 
            break;
        }
    } while (exit==1);
    return 0;
}
