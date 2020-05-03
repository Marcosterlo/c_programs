#include <stdio.h>

#define MAXS 20

int main() {
	FILE *fo, *fa;
	int x, y, c;
	char nfileopen[MAXS], nfilewrite[MAXS];
	printf("Inserire il nome del file da aprire: ");
	gets(nfileopen);
	printf("Inserire il nome del file da scrivere: ");
	gets(nfilewrite);
	fo=fopen(nfileopen, "r");
	fa=fopen(nfilewrite, "w");
	if (fo!=NULL && fa!=NULL) {
		while (fscanf(fo, "%d", &c)!=EOF) {
			x=c;
			fscanf(fo, "%d", &y);
			fprintf(fa, "%d\n", x-y);
		}
	}
	else
		printf("File non trovato\n");
	return 0;
}
