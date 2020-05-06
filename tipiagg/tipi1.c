#include <stdio.h>
#include <string.h>

typedef struct {
        char nome[30];
        char cognome[30];
        int eta;
        double salario;
    } v[100];

void ordina(v vett, FILE *fw, int i);

int main() {
    v vett;
    int i;
    FILE *fd, *fw;
    fd=fopen("tipi1.txt", "r");
    if (fd!=NULL) {
        fw=fopen("tipi1w.txt", "w");
        for (i=0; !feof(fd); fscanf(fd, "%s %s %d %lf", &vett[i].nome, &vett[i].cognome, &vett[i].eta, &vett[i].salario), i++);
        ordina(vett, fw, i);
    }
    else
        printf("Errore nell'apertura del file\n");    
    return 0;
}

void ordina(v vett, FILE *fw, int i) {
    int j, k, tmp;
    char tmpc[30];
    double tmpd;
    for (k=0; k<i-1; k++) {
        for (j=k+1; j<i; j++) {
            if (strcmp(vett[k].cognome, vett[j].cognome)<=0);
            else {
                strcpy(tmpc, vett[k].nome);
                strcpy(vett[k].nome, vett[j].nome);
                strcpy(vett[j].nome, tmpc);
                strcpy(tmpc, vett[k].cognome);
                strcpy(vett[k].cognome, vett[j].cognome);
                strcpy(vett[j].cognome, tmpc);
                tmp=vett[k].eta;
                vett[k].eta=vett[j].eta;
                vett[j].eta=tmp;
                tmpd=vett[k].salario;
                vett[k].salario=vett[j].salario;
                vett[j].salario=tmpd;
            }
        }
    }
    for (j=0; j<i; j++) {
        fprintf(fw, "%s %s %d %lf\n", vett[j].nome, vett[j].cognome, vett[j].eta, vett[j].salario);
    }
}