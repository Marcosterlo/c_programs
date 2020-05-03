#include <stdio.h>
#include <stdlib.h>

#define RANGE 10
#define MAXS 100

double media(double m[][10], int righr, int colonne);

int main() {
	double a[MAXS][10], b[MAXS][10];
	int i, k, righea, colonnea=10, righeb, colonneb=10;
	printf("Inserire il numero di righe della prima matrice: ");
	scanf("%d", &righea);
	printf("\n");
	printf("Inserire il numero di righe della seconda matrice: ");
	scanf("%d", &righeb);
	printf("\n");
	for (i=0; i<righea; i++) {
		for (k=0; k<colonnea; k++) {
			a[i][k] = rand()%RANGE;
		}
	}
	for (i=0; i<righeb; i++) {
		for (k=0; k<colonneb; k++) {
			b[i][k] = rand()%RANGE;
		}
	}
	printf("La prima matrice è:\n");
	for (i=0; i<righea; i++) {
		for (k=0; k<colonnea; k++) {
			printf("%2g", a[i][k]);
		}
		printf("\n");
	}
	printf("\n");
	printf("La seconda matrice è:\n");
	for (i=0; i<righea; i++) {
		for (k=0; k<colonnea; k++) {
			printf("%2g", b[i][k]);
		}
		printf("\n");
	}
	printf("\nLa media della prima matrice è %.2lf", media(a, righea, colonnea));
	printf("\nLa media della seconda matrice è %.2lf\n", media(b, righeb, colonneb));
	return 0;
}

double media(double m[][10], int righe, int colonne) {
	double tot=0;
	int i, k;
	for (i=0; i<righe; i++) {
		for (k=0; k<colonne; k++) {
			tot+=m[i][k];
		}
	}
	return tot/(float)(righe*colonne);
}
