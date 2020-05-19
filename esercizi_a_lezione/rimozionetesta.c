#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int val;
    struct nodo *next;
};

typedef struct nodo *Nodo;

int main() {
    Nodo head=NULL, p;
    for (int i=0; i<3; i++) {
        p=(Nodo) malloc(sizeof(struct nodo));
        p->val=i+1;
        if (head==NULL) {
            head=p;
            p->next=NULL;
        }
        else {
            p->next=head;
            head=p;
        }
    }
    p=head;
    while (p!=NULL) {
        printf("%d-> ", p->val);
        p=p->next;
    }
    printf("\n");
    //rimozione della testa
    p=head;
    head=head->next;
    free(p);
    p=head;
    while (p!=NULL) {
        printf("%d-> ", p->val);
        p=p->next;
    }
    printf("\n");
    return 0;
}