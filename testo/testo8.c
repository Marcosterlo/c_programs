#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXS 30

int main() {
	int secret;
	char nfile[MAXS], nfilew[MAXS], c;
	FILE *fd, *fw;
	printf("Inserire il nome del file da leggere: ");
	gets(nfile);
	printf("Inserire il nome del file di output: ");
	gets(nfilew);
	fd=fopen(nfile, "r");
	if (fd!=NULL) {
		fw=fopen(nfilew, "w");
		printf("Inserire il codice segreto: ");
		scanf("%d", &secret);
		while (fscanf(fd, "%c", &c)!=EOF) {
			if (islower(c)) {
				c+=secret;
				if (c>122) {
					c-=26;
				}
			}
			if (isupper(c)) {
				c+=secret;
				if (c>90) {
					c-=26;
				}
			}
			fprintf(fw, "%c", c);
		}
	}
	else
		printf("File di input non trovato\n");
	return 0;
}
