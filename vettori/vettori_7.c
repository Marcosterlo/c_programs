#include <stdio.h>

#define MAXI 10

int main() {
	int a[MAXI][MAXI], max, min, somma=0, i, j;
	double media, n_righe, n_colonne;
	do {
		printf("Quante righe?");
		scanf("%lf", &n_righe);
		printf("Quante colonne?");
		scanf("%lf", &n_colonne);
	} while (n_righe < 0 || n_colonne<0 || n_righe>MAXI || n_colonne>MAXI);
	for (i=0; i<n_righe; i++) {
		for (j=0; j<n_colonne; j++) {
			printf("Inserire il nuemerlo della %da riga e %da colonna: ", i+1, j+1);
			scanf("%d", &a[i][j]);
			somma += a[i][j];
		}
	}
	max = a[0][0];
	min = a[0][0];
	for (i=0; i<n_righe; i++) {
		for (j=0; j<n_colonne; j++) {
			if (a[i][j]<min)
				min = a[i][j];
			if (a[i][j]>max)
				max = a[i][j];
		}
	}
	printf("Il massimo è %d, il minimo è %d, la somma è %d e la media è %g\n", max, min, somma, somma/(n_righe*n_colonne));
	return 0;
}
