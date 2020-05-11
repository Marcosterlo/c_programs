#include <stdio.h>
#include "funzioni.h"

int main() {
    Nodo head=NULL;
    int n, exit, scelta;
    do {
        printf("Inserire il numero corrispondente all'operazione desiderata:\n****\n1) Aggiungere alla testa\n2) Aggiungere alla coda\n");
        printf("3) Rimuovere la testa\n4) Rimuovere la coda\n5) Clear all\n6) Niente\n****\n");
        scanf("%d", &scelta);
        switch (scelta) {
            case 1: 
            printf("Inserire il valore del nodo: ");
            scanf("%d", &n);
            head=AddToHead(head, n);
            break;
            case 2:
            printf("Inserire il valore del nodo: ");
            scanf("%d", &n);
            head=AddToTail(head, n);
            break;
            case 3:
    
            case 4:

            case 5:

            default: 
            break;
        }
        printf("Aggiungere un altro valore? (1 per si e 0 per no) ");
        scanf("%d", &exit);  
    } while (exit==1);
    Display(head);
    return 0;
}
