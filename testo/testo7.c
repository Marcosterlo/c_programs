#include <stdio.h>
#include <string.h>

#define MAXS 30

int main() {
	char nfile[MAXS], nfile1[MAXS], nfile2[MAXS];
	FILE *fd1, *fd2, *fw;
	int a1, a2;
	printf("Inserire il nome del primo file da leggere: ");
	gets(nfile1);
	printf("Inserire il nome del secondo file da leggere: ");
	gets(nfile2);
	fd1=fopen(nfile1, "r");
	fd2=fopen(nfile2, "r");
	if (fd1!=NULL && fd2!=NULL) {
		printf("Inserire il nome del file da scrivere: ");
		gets(nfile);
		fw=fopen(nfile, "w");
		fscanf(fd1, "%d", &a1);
		fscanf(fd2, "%d", &a2);
		while (!feof(fd1) && !feof(fd2)) {
			if (a1<=a2) {
				fprintf(fw, "%d\n", a1);
				fscanf(fd1, "%d", &a1);
			}
			else if (a1>a2) {
				fprintf(fw, "%d\n", a2);
				fscanf(fd2, "%d", &a2);
			}
		}
		if (feof(fd1) && feof(fd2));
		else if (feof(fd1)) {
			fprintf(fw, "%d\n", a2);
			while (fscanf(fd2, "%d", &a2)!=EOF) {
				fprintf(fw, "%d\n", a2);
			}
		}
		else if (feof(fd2)) {
			fprintf(fw, "%d\n", a1);
			while (fscanf(fd1, "%d", &a1)!=EOF) {
				fprintf(fw, "%d\n", a1);
			}
		
		}
		
	}
	else
		printf("Errore nell'apertura dei file, controllare il codice e i file di input\n");
	return 0;
}
