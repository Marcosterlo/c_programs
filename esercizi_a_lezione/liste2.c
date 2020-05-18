#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXS 30

struct utente {
    char nome[MAXS];
    char cognome[MAXS];
    int eta;
    struct utente *next;
};

typedef struct utente *Utente;

int main() {
    Utente head=NULL, temp;
    char nome[MAXS], cognome[MAXS];
    int eta, esci=1;
    do {
        temp = (Utente) malloc(sizeof(struct utente));
        printf("Inserisci nome, cognome e età: ");
        scanf("%s %s %d", nome, cognome, &eta);
        strcpy(temp->nome, nome);
        strcpy(temp->cognome, cognome);
        temp->eta=eta;
        if (head==NULL) {
            head=temp;
            temp->next=NULL;
        }
        else {
            temp->next=head;
            head=temp;
        }
        printf("Inserire un altro utente? (1=si, 0=no) ");
        scanf("%d", &esci);
    } while (esci);
    while (head!=NULL) {
        printf("Nome: %s, Cognome: %s, Età: %d\n", head->nome, head->cognome, head->eta);
        head=head->next;
    }
    return 0;
}