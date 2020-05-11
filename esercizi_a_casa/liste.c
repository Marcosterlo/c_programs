#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int data;
    struct nodo *next;
};

typedef struct nodo *Nodo;

void display(Nodo head);

int main() {
    Nodo head=NULL, temp=NULL, p=NULL;
    int exit=1;
    do {
        temp=malloc(sizeof(Nodo));
        printf("Inserire il dato: ");
        scanf("%d", &(temp->data));
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
        printf("Aggiungere un altro elemento? (0 per no e qualsiasi intero per si) ");
        scanf("%d", &exit);
    } while (exit);
    display(head);
    return 0;
}

void display(Nodo head) {
    Nodo temp;
    temp=head;
    while (temp->next!=NULL) {
        printf("%d-> ", temp->data);
        temp=temp->next;
    }
    printf("%d\n", temp->data);
}