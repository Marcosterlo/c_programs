#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int dato;
    struct nodo *next;
};

typedef struct nodo *Nodo;

int main() {
    Nodo head=malloc(sizeof(Nodo));
    for (int i=0; i<10; i++) {
        Nodo n=malloc(sizeof(Nodo));
        n->dato=i;
        n->next=head;
        head=n;
    }

    Nodo temp = head;
    for (int i=0; i<10; i++) {
        printf("%d\n", temp->dato);
        temp=temp->next;
    }
    return 0;
}