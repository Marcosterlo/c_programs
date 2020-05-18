/*Scrivere un programma che consenta di inserire una lista di interi,
questa lista deve essere poi salvata su un file di testo,
ponendo un intero per ogni riga.
Definire una funzione che leggendo dai file faccia la media dei 
soldi numeri maggiori di 18.

-una funzione di inserimento in lista 
-una funzione di scrittura su file 
-una funzione di lettura per il calcolo della media */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct num {
    int val;
    struct num *next;
};

typedef struct num *Num;

Num InserimentoInTesta(Num head);
void ScritturaSuFile(Num head);
double MediaValori();

int main() {
    int val, esci=1;
    Num head=NULL, temp;
    FILE *fd;
    do {
        head=InserimentoInTesta(head);
        printf("Inserire un altro valore? (1=si, 0=no) ");
        scanf("%d", &esci);
    } while (esci);
    temp=head;
    while (temp!=NULL) {
        printf("%d-> ", temp->val);
        temp=temp->next;
    }
    printf("\n");
    ScritturaSuFile(head);
    printf("La media dei valori superiori a 18 è %.2lf\n", MediaValori(fd));
}

Num InserimentoInTesta(Num head) {
    Num p;
    p=(Num) malloc(sizeof(struct num));
    printf("Inserire il valore: ");
    scanf("%d", &p->val);
    if (head==NULL) {
        head=p;
        p->next=NULL;
    }
    else {
        p->next=head;
        head=p;
    }
    return head;
}

void ScritturaSuFile(Num head) {
    FILE *fd;
    fd=fopen("Write.txt", "w");
    if (fd!=NULL) {
        while (head!=NULL) {
            fprintf(fd, "%d\n", head->val);
            head=head->next;
        }
        fclose(fd);
    }
    else  {
        printf("Errore nell'apertura del file\n");
    }
}

double MediaValori() {
    FILE *fd;
    int tot=0, i, n;
    fd=fopen("Write.txt", "r");
    if (fd!=NULL) {
        while (!feof(fd)) {
            fscanf(fd, "%d", &i);
            if (i>18) {
                tot+=i;
                n++;
            }
            return (double) tot/n;
        }
    }
    else
        printf("Errore nell'apertura del fle\n");
        return 0;    
}