#include <stdio.h>
#include <string.h>

#define MAXS 50

int main() {
	char nfile[MAXS], nwrite[MAXS], c;
	int nchar, i=0;
	FILE *fd, *fw;
	printf("Inserire il nome del del file da leggere: ");
	gets(nfile);
	fd=fopen(nfile, "r");
	if (fd!=NULL) {
		printf("Inserire il nome del file da creare: ");
		gets(nwrite);
		fw=fopen(nwrite, "w");
		printf("Inserire il numero massimo di caratteri che le righe devono contenere: ");
		scanf("%d", &nchar);
		while (!feof(fd)) {	
			fscanf(fd, "%c", &c);
			i++;
			if (c=='\n') {
				fprintf(fw, "%c", c);
				i=0;
			}
			else if (i>nchar) {
				i=1;
				fprintf(fw, "\n%c", c);
			}
			else {
				fprintf(fw, "%c", c);
			}
		}
	}
	else
		printf("File non trovato\n");
	return 0;
}
