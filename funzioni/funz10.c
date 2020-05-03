#include <stdio.h>
#include <string.h>
#include <ctype.h>

//@ in decimale è 64

#define MAXT 300

void alfabet(char a[]);

void minuscolo(char a[]);

int main() {
	char txt[MAXT], parola[MAXT], b[MAXT], *ptxt, *pa, *pb;
	int i, len_txt, result=0;
	printf("Scrivere una parola per riga, per terminare l'inserimento inserire il carattere \'@\'\n");
	for (len_txt=0; (txt[len_txt]=getchar())!=64; len_txt++);
	txt[len_txt]='\0';
	printf("Il text inserito è: \n%s\n", txt);	
	while ((getchar())!='\n');
	printf("Inserire una parola: ");
	gets(parola);
	printf("Parola inserita: %s\n", parola);
	minuscolo(parola);
	alfabet(parola);
	printf("Parola oridnta e minuscolata: %s\n", parola);
	ptxt=txt;
	while (*ptxt!='\0') {
		for (pa=parola, pb=b; (*ptxt!='\n')&&(ptxt<txt+len_txt); ptxt++, pb++) {
			*pb=*ptxt;
		}
		*pb='\0';
		printf("\nParola corrente contenuta in b: %s\n", b);
		if (*ptxt!='\0')
			ptxt++;
		printf("\nPosizone del puntatore di txt rispetto all'inizio: %d\n", ptxt-txt);
		alfabet(b);
		minuscolo(b);
		printf("\nParola corrente contenuta in b minuscolata: %s\n", b);
		if (!strcmp(parola, b))
			result++;
	}
	printf("Trovate %d corrispondenze\n", result);
	return 0;
}

void alfabet(char a[]) {
	int i, k, tmp;
	for (i=0; i<strlen(a)-1; i++) {
		for (k=1; k<strlen(a)-i; k++) {
			if (a[i+k]<a[i]) {
				tmp=a[i];
				a[i]=a[k+i];
				a[k+i]=tmp;
			}
		}
	}
}

void minuscolo(char a[]) {
	int i;
	for (i=0; i<strlen(a); i++) {
		a[i]=(char)tolower(a[i]);
	}
}
