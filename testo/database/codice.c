#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "funzioni.h"

#define MAXS 200*163

int main() {
	FILE *fd;
	int sel, esci=0;
	char file[MAXS], nome[MAXS], cognome[MAXS], indirizzo[MAXS], numero[MAXS];
	while (!esci) {
		sel=menu();
		switch (sel) {
			case (1):
				printf("Inserire il nome: ");
				gets(nome);
				printf("Inserire il cognome: ");
				gets(cognome);
				printf("Inserire l'indirizzo (senza spazi): ");
				gets(indirizzo);
				printf("Inserire il numero: ");
				gets(numero);
				inserisci(file, nome, cognome, indirizzo, numero);
				break;
			case(2):
				printf("Inserire nome e cognome del contatto da rimuovere: ");
				scanf("%s %s", nome, cognome);
				standard(nome);
				standard(cognome);
				togli(file, nome, cognome);
				break;
			case(3):
				printf("Inserire il cognome del contatto da cercare: ");
				gets(cognome);
				standard(cognome);
				cerca(file, cognome);
				break;
			case(4):
				visualizza(file);
				break;
			case(5):
				esci=1;
				break;
		}
	}
	printf("Arrivederci!\n");
	return 0;
}
