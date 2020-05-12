#include <stdio.h>
#include <stdlib.h>

static struct nodo {
    int val;
    struct nodo *next;
};

typedef struct nodo *Nodo;

void Display(Nodo *head) {
    Nodo p;
    if (*head==NULL) 
        printf("Lista vuota\n");
    p=*head;
    while (p!=NULL) {
        printf("%d->  ", p->val);
        p=p->next;
    }
    printf("\n");
}

void AddToHead(Nodo *head, int i) {
    Nodo p, temp;
    p=malloc(sizeof(Nodo));
    p->val=i;
    if ((*head)==NULL) {
        *head=p;
        (*head)->next=NULL;
    }
    else {
        p->next=*head;
        *head=p;
    }
}

void AddToTail(Nodo *head, int i) {
    Nodo temp, p;
    temp=malloc(sizeof(Nodo));
    temp->val=i;
    temp->next=NULL;
    if (*head==NULL) {
        *head=temp;
    }
    else {
        p=*head;
        while (p->next!=NULL) 
            p=p->next;
        p->next=temp;
    }
}

void RemoveFromHead(Nodo *head) {
    Nodo p;
    //nel caso servisse estrarre il valore
    int x;
    if (*head==NULL) 
        printf("Non si può rimuovere la testa, lista vuota\n");
    else {
        x=(*head)->val;
        p=*head;
        (*head)=(*head)->next;
        free(p);
    }
}

void RemoveFromTail(Nodo *head, int *x) {
    Nodo p, q;
    if ((*head)==NULL) 
        printf("Non si può rimuovere la coda, lista vuota\n");
    else {
        p=(*head);
        while (p->next->next!=NULL) 
            p=p->next;
        q=p->next;
        *x=q->val;
        p->next=NULL;
        free(q);
    }
}

void ClearAll(Nodo *head) {
    Nodo p, temp; 
    p=(*head);
    while (p!=NULL) {
        temp=p;
        p=p->next;
        free(temp);
    }
    *head=NULL;
}

void Push(Nodo *head) {
    int i;
    printf("Inserire il valore da pushare: ");
    scanf("%d", &i);
    AddToHead(head, i);
}

void Pop(Nodo *head, int *x) {
    Nodo p;
    if ((*head)!=NULL) {
        p=*head;
        *x=p->val;
        *head=(*head)->next;
        free(p);
    }
    else {
        printf("Nessun valore da estrarre, lista vuota\n");
    }
}

void EnQueue(Nodo *head) {
    Push(head);
}

void DeQueue(Nodo *head, int *x) {
    if ((*head)!=NULL)
        RemoveFromTail(head, x);
    else 
        printf("Non si può rimuovere la coda, lista vuota\n");
}

