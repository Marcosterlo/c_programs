#include <string.h>
#include <stdio.h>
#include <ctype.h>

#define MAXS 200*163

int menu();
void inserisci(char *file, char *nome, char *cognome, char *indirizzo, char *numero);
void visualizza(char *file);
void cerca(char *file, char *cognome);
void apriescrivi(char *file);
void togli(char *file, char *nome, char *cognome);
void standard(char *n);

int menu() {
	char c;
	int l=0;
	do {
		printf("===============\nInserire l'opzione desiderata:\n1)Inserire\n2)Togliere\n3)Cercare\n4)Visualizza tutti\n5)Esci\n===============\n");
                scanf("%d", &l);
        } while (l<1 || l>5);
	while (c=getchar()!='\n');
	return l;
}

void inserisci(char *file, char *nome, char *cognome, char *indirizzo, char *numero) {
	FILE *fd;
	char a[MAXS];
	apriescrivi(file);
	sprintf(a, "%s %s %s %s\n", nome, cognome, indirizzo, numero);
	strcat(file, a);
	fd=fopen("database.txt", "w");
	fprintf(fd, "%s", file);
	fclose(fd);
}

void visualizza(char *file) {
	FILE *fd;
	apriescrivi(file);
	printf("L'elenco attuale dei contatti è:\n\n1) Nome 2) Cognome 3) Indirizzo 4) Numero\n\n%s\n", file);
}

void cerca(char *file, char *cognome) {
	apriescrivi(file);
	int trovato=0;
	char *p, a[MAXS]="";
	for (p=file; p<file+strlen(file);) {
		sscanf(p, "%*s %s %*s %*s", a);
		standard(a);
		if (!strcmp(a, cognome)) {
			trovato=1;
			//printa la riga
			if (p==file) {
				printf("\nCorrispondenza trovata:\n1) Nome 2) Cognome 3) Indirizzo 4) Numero\n\n");
				while (*p!='\n') {
					printf("%c", *p);
					p++;
				}
			}
			else {
				printf("\nCorrispondenza trovata:\n1) Nome 2) Cognome 3) Indirizzo 4) Numero\n\n");
				while (*p!='\n') {
					p--;
				}
				p++;
				while (*p!='\n') {
					printf("%c", *p);
					p++;
				}
			}
			printf("\n");
		}
		while (*p!='\n')
			p++;
		p++;
	}
	if (!trovato)
		printf("Nessuna corrsipondenza trovata\n");
}

void apriescrivi(char *file) {
	FILE *fd;
	int i=0;
	fd=fopen("database.txt", "r");
	while (!feof(fd)) {
		fscanf(fd, "%c", &file[i]);
		i++;
	}
	file[strlen(file)]='\0';
	fclose(fd);
}

void togli(char *file, char *nome, char *cognome) {
	apriescrivi(file);
	FILE *fd;
	char *p, a[MAXS]="", b[MAXS]="", file1[MAXS]="", file2[MAXS]="";
	int elim=0;
	for (p=file; p<file+strlen(file);) {
		if (elim) {
			p=file;
			elim=0;
		}
		sscanf(p, "%s %s %*s %*s", a, b);
		standard(a);
		standard(b);
		if (!strcmp(a, nome) && !strcmp(b, cognome)) {
			strncpy(file1, file, p-file);
			file1[strlen(file1)]='\0';
			while (*p!='\n') {
				p++;
			}
			p++;
			sprintf(file2, "%s", p);
			file2[strlen(file2)]='\0';
			strcat(file1, file2);
			strcpy(file, file1);
			elim=1;
		}
		else {
			while (*p!='\n')
				p++;
			p++;
		}
	}
	fd=fopen("database.txt", "w");
	fprintf(fd, "%s", file);
	fclose(fd);
}

void standard(char *n) {
	char *q;
	q=n;
	while (*q!='\0') {
		*q=tolower(*q);
		q++;
	}
}
