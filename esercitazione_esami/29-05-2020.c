#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct libro {
    char autore[30];
    char titolo[30];
    int anno;
    float costo;
    int n;
    int stampa;
    struct libro *next;
};

typedef struct libro *Libro;

int main() {
    Libro head=NULL, temp;
    int esci=1;
    float rtot=0, rtot2010=0;
    char autore[30], titolo[30], cerca[30];
    do {
        temp=malloc(sizeof(struct libro));
        printf("Inserire autore: ");
        gets(autore);
        strcpy(head->autore, autore);
        printf("Inserire titolo: ");
        gets(titolo);
        strcpy(head->titolo, titolo);
        printf("Inserire anno: ");
        scanf("%d", &(temp->anno));
        printf("Inserire costo: ");
        scanf("%f", &(temp->costo));
        printf("Inserire numero copie: ");
        scanf("%d", &(temp->n));
        printf("Inserire se in stampa (1) o meno (0): ");
        scanf("%d", &(temp->stampa));
        if (head==NULL) {
            temp->next=NULL;
            head=temp;
        }
        else {
            temp->next=head;
            head=temp;
        }
        printf("Inserire un altro libro? (1 per si e 0 per no) ");
        scanf("%d", &esci);
    } while (esci);
    printf("Inserire autore da cercare: ");
    gets(cerca);
    while (head!=NULL) {
        if (head->stampa) {
            rtot+= (float) head->n*head->costo;
        }
        if (head->anno >2009 && head->anno <2016) {
            rtot2010+= (float) head->n*head->costo;
        }
        if (!strcmp(head->autore, cerca)) {
            printf("Titolo: %s, anno: %d, costo: %f, n copie: %d, in stampa: %d\n", head->titolo, head->anno, head->costo, head->n, head->stampa);
        }
        head=head->next;
    }
    printf("Ricavi totali: %f, ricavi tar 2010 e 2015: %f\n", rtot, rtot2010);
    return 0;
}