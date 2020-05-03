#include <stdio.h>
#include <string.h>

#define MAXS 20

int main() {
	char nfile[MAXS], a[MAXS], c;
	float x, y, z, amax=0, acorr;
	int nm=0, n=0;
	FILE *fd;
	printf("Inserire nome del file da aprire: ");
	gets(nfile);
	fd=fopen(nfile, "r");
	if (fd!=NULL) {
		while (!(feof(fd))) {
			x=0;
			y=0;
			z=0;
			fgets(a, MAXS, fd);
			n++;
			a[strlen(a)-1]='\0';
			sscanf(a, "%f%f%f", &x, &y, &z);
			fflush(fd);
			if (z==0) {
				acorr=x*y/2;
			}
			else {
				acorr=(x+y)*z/2;
			}
			if (acorr>amax) {
					amax=acorr;
					nm=n;
			}
		}	
		if (z==0) 
			printf("La figura è un traingolo, i dati si trovano al %do rigo, l'Area è di %.2f\n", nm, amax);
		else
			printf("La figura è un trapezio, i dati si trovano al %do rigo, l'Area è di %.2f\n", nm, amax);
	}
	else
		printf("File non trovato\n");
	return 0;
}
