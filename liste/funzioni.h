#include <stdio.h>
#include <stdlib.h>

static struct nodo {
    int val;
    struct nodo *next;
};

typedef struct nodo *Nodo;

void Display(Nodo head) {
    Nodo p;
    if (head==NULL) 
        printf("Lista vuota\n");
    p=head;
    while (p!=NULL) {
        printf("%d->  ", p->val);
        p=p->next;
    }
    printf("\n");
}

Nodo AddToHead(Nodo head, int i) {
    Nodo p, temp;
    p=malloc(sizeof(Nodo));
    p->val=i;
    if (head==NULL) {
        head=p;
        head->next=NULL;
    }
    else {
        p->next=head;
        head=p;
    }
    return head;
}

Nodo AddToTail(Nodo head, int i) {
    Nodo temp, p;
    temp=malloc(sizeof(Nodo));
    temp->val=i;
    temp->next=NULL;
    if (head==NULL) {
        head=temp;
    }
    else {
        p=head;
        while (p->next!=NULL) 
            p=p->next;
        p->next=temp;
    }
    return head;
}

Nodo RemoveFromHead(Nodo head) {
    Nodo p;
    //nel caso servisse estrarre il valore
    int x;
    x=head->val;
    p=head;
    head=head->next;
    free(p);
    return head;
}

void RemoveFromTail(Nodo head) {
    Nodo p, q;
    int x;
    p=head;
    while (p->next->next!=NULL) 
        p=p->next;
    q=p->next;
    x=q->val;
    p->next=NULL;
    free(q);
}

Nodo ClearAll(Nodo head) {
    Nodo p, temp; 
    p=head;
    while (p!=NULL) {
        temp=p;
        p=p->next;
        free(temp);
    }
    return NULL;
}