#include <stdio.h>
#include <string.h>

#define MAXS 100

int main() {
	int nrighe=0, ncaratteri=0;
	char nfile[MAXS], a[MAXS], cntr;
	FILE *fd;
	printf("Inserire il nome del file: ");
	gets(nfile);
	fd=fopen(nfile, "r");
	if (fd!=NULL) {
		while (fscanf(fd, "%c", &cntr)!=EOF) {
			if (cntr==10)
				nrighe++;
			else
				ncaratteri++;
		}
		printf("N di caratteri: %d, N di righe: %d\n", ncaratteri, nrighe);
	}
	else
		printf("File non trovato\n");
	return 0;
}
