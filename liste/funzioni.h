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

/*void RemoveFromHead(Nodo head) {
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
    
}*/