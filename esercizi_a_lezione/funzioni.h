#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int val;
    struct nodo *next;
};

typedef struct nodo *Nodo;

Nodo AddToHead(Nodo head) {
    int i;
    Nodo p;
    p=(Nodo) malloc(sizeof(struct nodo));
    printf("Inserisci il valore da aggiungere: ");
    scanf("%d", &i);
    p->val=i;
    p->next=head;
    head=p;
    return head;
}

void AddToTail(Nodo head) {
    Nodo p=(Nodo) malloc(sizeof(struct nodo));
    printf("Inserisci il valore da aggiungere: ");
    scanf("%d", &(p->val));
    while(head->next!=NULL) {
        head=head->next;
    }
    head->next=p;
    p->next=NULL;
}

Nodo RemoveFromHead(Nodo head) {
    Nodo p;
    p=head;
    head=head->next;
    free(p);
    return head;
}

void RemoveFromTail(Nodo head) {
    Nodo p;
    while (head->next->next!=NULL) {
        head=head->next;
    }
    p=head->next;
    head->next=NULL;
    free(p);
}

Nodo ClearAll(Nodo head) {
    Nodo p;
    while (head!=NULL) {
        p=head;
        head=head->next;
        free(p);
    }
    return NULL;
}

Nodo AddElement(Nodo head) {
    int posto, i=0;
    Nodo iter=head;
    printf("A che posto inserire l'elemento? ");
    scanf("%d", &posto);
    posto--;
    if (posto==0) {
        return AddToHead(head);
    }
    while (i<posto-1) {
        if (iter==NULL)
            break;
        iter=iter->next;
        i++;
    }
    if (i<posto) {
        AddToTail(head);
    }
    else {
        Nodo p=(Nodo) malloc(sizeof(struct nodo));
        printf("Inserisci il valore: ");
        scanf("%d", &(p->val));
        p->next=iter->next;
        iter->next=p;
    }
    return head;
}

void Display(Nodo head) {
    while (head!=NULL) {
        printf("%d-> ", head->val);
        head=head->next;
    }
    printf("\n");
}