#include <stdio.h>
#include <ctype.h>

#define MAXS 30

int main() {
	char nfile[MAXS], a[MAXS], c;
	int na=0, nb=0, nc=0;
	FILE *fd;
	printf("Inserire il nome del file da aprire: ");
	gets(nfile);
	fd=fopen(nfile, "r");
	if (fd!=NULL) {
		while (!feof(fd)) {
			fscanf(fd, "%s", a);
			if (isalpha(a[0]))
				c=a[0];
				switch (c) {
					case ('a'):
						na++;
						break;
					case ('b'):
						nb++;
						break;
					case ('c'):
						nc++;
						break;
					default:
						break;
				}
		}
		printf("Parole che iniziano per A: %d\nParole che iniziano per B: %d\nParole che iniziano per C: %d\n", na, nb, nc);
	}
	else
		printf("File non trovato\n");
	return 0;
}
