#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAXRIGHE 20
#define MAXCOLONNE 26
#define MAXVAL 99

int main() {
	srand(time(NULL));
	int a[MAXRIGHE][MAXCOLONNE], i, j, pari=0; 
	double n_righe, n_colonne;
	do {
		printf("Inserire il numero di righe: ");
		scanf("%lf", &n_righe);
		printf("Inserire numero di colonne: ");
		scanf("%lf", &n_colonne);
	} while (n_righe<0 || n_righe>MAXRIGHE || n_colonne<0 || n_colonne>MAXCOLONNE);
	printf("\n");
	for (i=0; i<n_righe; i++) {
		for (j=0; j<n_colonne; j++) {
			a[i][j] = rand()%(MAXVAL+1);
		}
	}
	for (i=0; i<n_righe; i++) {
		for (j=0; j<n_colonne; j++) {
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	for (i=0; i<n_righe; i++) {
		for (j=0; j<n_colonne; j++) {
			if (a[i][j]%2==0)
					pari++;
			if (pari>=(n_righe*n_colonne)/2)
				goto exit;
		}
	}
	exit:
	if (pari>=(n_righe*n_colonne)/2)
		printf("Si\n");
	else
		printf("No\n");
	return 0;
}
