#include <stdio.h>
#include <stdlib.h>

static struct nodo {
    int val;
    struct nodo *next;
};

typedef struct nodo *Nodo;

void listAddToHead(Nodo *head, int *count, int *ordinata) {
    int i;
    Nodo temp=malloc(sizeof(Nodo));
    printf("Inserire il valore da aggiungere: ");
    scanf("%d", &i); 
    temp->val=i;
    if (*head==NULL) {
        *head=temp;
        (*head)->next=NULL;
        *count=1;
    }
    else {
        temp->next=*head;
        *head=temp;
        (*count)++;
    }
    if (*ordinata)
        *ordinata=0;
}

void listAddToTail(Nodo *head, int *count, int *ordinata) {
    int i;
    Nodo temp=malloc(sizeof(Nodo)), p;
    printf("Inserire il valore da aggiungere: ");
    scanf("%d", &i); 
    temp->val=i;
    temp->next=NULL;
    if (*head==NULL) {
        *head=temp;
        (*head)->next=NULL;
        *count=1;
    }
    else {
        p=*head;
        while (p->next!=NULL)
            p=p->next;
        p->next=temp;
        *count++;
    }
    if (*ordinata)
        *ordinata=0;
}

int listRemoveFromHead(Nodo *head, int *count) {
    int x;
    Nodo p;
    if (*head==NULL) {
        printf("Lista vuota");
        *count=0;
        return 0;
    }
    else {
        p=*head;
        x=p->val;
        *head=(*head)->next;
        free(p);
        *count--;
        return x;
    }
}

int listRemoveFromTail(Nodo *head, int *count) {
    int x;
    Nodo p, q;
    if (*head==NULL) { 
        printf("Lista vuota");
        *count=0;
        return 0;
    }
    else {
        p=*head;
        while (p->next->next!=NULL)
            p=p->next;
        q=p->next;
        p->next=NULL;
        x=q->val;
        free(q);
        *count--;
        return x;
    }
}

void listClearAll(Nodo *head, int *count) {
    if (*head=NULL);
    else {
        Nodo p, q;
        p=*head;
        while (p!=NULL) {
            q=p;
            p=p->next;
            free(q);
        }
        *head=NULL;
        *count=0;
    }
}

void listCount(Nodo *head, int *count) {
    if (*head=NULL) {
        *count=0;
        printf("Numero elementi: 0\n");
    }
    else {
        Nodo p;
        p=*head;
        *count=1;
        while (p->next!=NULL) {
            p=p->next;
            *count++;
        }
    }
}
int listTestIsEmpty(Nodo *head) {
    if (*head==NULL) {
        printf("Lista vuota\n");
        return 1;
    }
    else {
        printf("Lista non vuota\n");
        return 0;
    }
}

int listSort(Nodo *head, int *ordinata, int *crescente) {
    int ascendente;
    printf("Ordinare in senso crescente (1) o decrescente (0)? ");
    scanf("%d", &ascendente);
    if (!(*ordinata) || (*crescente!=ascendente)) {
        Nodo a, b;
        int x;
        if (ascendente) {
            for (a=*head; a->next!=NULL; a=a->next) {
                for (b=a->next; b!=NULL; b=b->next) {
                    if (a->val > b->val) {
                        x=a->val;
                        a->val=b->val;
                        b->val=x;
                    }
                }
            }
        }
        else {
            for (a=*head; a->next!=NULL; a=a->next) {
                for (b=a->next; b!=NULL; b=b->next) {
                    if (a->val < b->val) {
                        x=a->val;
                        a->val=b->val;
                        b->val=x;
                    }
                }
            } 
        }
        *ordinata=1;
        *crescente=ascendente;
        return ascendente;
    }
    else if (*crescente==ascendente) {
        printf("lista già ordinata\n");
        *crescente=ascendente;
        return ascendente;
    }
}

void listAddOrdered(Nodo *head, int *ordinato, int *crescente, int *count) {
    int x, continua=1;
    Nodo p=malloc(sizeof(Nodo)), iter;
    if (*ordinato);
    else {
        listSort(head, ordinato, crescente);
    }
    printf("Inserire il valore da aggiungere: ");
    scanf("%d", &x);
    iter=*head;
    p->val=x;
    if (*crescente) {
       for (iter=*head; continua && iter!=NULL; iter=iter->next) {
            if (p->val < iter->val && iter==*head) {
                p->next=iter;
                *head=p;
                continua=0;
            }
            else if (p->val > iter->val && iter->next==NULL) {
                p->next=NULL;
                iter->next=p;
                continua=0;
            }
            else if (p->val < iter->next->val) {
                p->next=iter->next;
                iter->next=p;
                continua=0;
            }  
        }
    }
    else {
        for (iter=*head; continua && iter!=NULL; iter=iter->next) {
            if (p->val > iter->val && iter==*head) {
                p->next=iter;
                *head=p;
                continua=0;
            }
            else if (p->val < iter->val && iter->next==NULL) {
                p->next=NULL;
                iter->next=p;
                continua=0;
            }
            else if (p->val > iter->next->val) {
                p->next=iter->next;
                iter->next=p;
                continua=0;
            }
        }
    }
}

Nodo listFind(Nodo *head, int ordinato, int crescente) {
    int valore, indice, i;
    Nodo iter=*head;
    printf("Inserire il valore da cercare: ");
    scanf("%d", &valore);
    printf("Inserire il valore dell'indice da cu iniziare a cercare: ");
    scanf("%d", &indice);
    if (ordinato) {
        for (i=1; i<indice || iter!=NULL; i++, iter=iter->next);
        if (crescente) {
            if (valore>iter->val) {
                printf("Valore non trovato\n");
                return NULL;
            }
            else {
                for (; iter!=NULL || iter->val!=valore || valore>iter->val; iter=iter->next);
                if (iter!=NULL || valore>iter->val) {
                    printf("Valore trovato\n");
                    return iter;
                }
                else
                    printf("Valore non trovato\n");
                    return NULL;
            }
        }
        else {
            if (valore<iter->val) {
                printf("Valore non trovato\n");
                return NULL;
            }
            else {
                for (; iter!=NULL || iter->val!=valore || valore<iter->val; iter=iter->next);
                if (iter!=NULL || valore<iter->val) {
                    printf("Valore trovato\n");
                    return iter;
                }
                else {
                    printf("Valore non trovato\n");
                    return NULL;
                }
            }
        }
        
    }
    else {
        for (i=0; i<indice || iter!=NULL; i++, iter=iter->next);
        for (; iter!=NULL || iter->val!=valore; iter=iter->next);
        if (iter!=NULL) {
            printf("Valore trovato\n");
            return iter;
        }
        else {
            printf("Valore non trovato\n");
            return NULL;
        }
    }
}