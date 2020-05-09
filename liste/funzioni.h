#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int val;
    struct nodo *next;
};

typedef struct nodo *Nodo;

static Nodo head=NULL;

Nodo AddToHead(int i) {
    Nodo p;
    if ((p=malloc(sizeof(Nodo)))!=NULL); {
        p->val=i;
        p->next=head;
        head=p;
    }
    return head;
}

void AddToTail(int i) {
    Nodo testa=head, p;
    while (testa->next!=NULL) {
        testa=testa->next;
    }
    if ((p=malloc(sizeof(Nodo))!=NULL)) {
        testa->next=p;
        p->val=i;
        p->next=NULL;
    }
}

void RemoveFromHead(Nodo head) {
    Nodo p;
    int x;
    if (head!=NULL) {
        x = head->val;
        p=head;
        head=head->next;
        free(p);
    }
}

void RemoveFromTail() {

}

void ClearAll() {
    
}