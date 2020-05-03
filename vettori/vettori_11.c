#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAXRIGHE 20
#define MAXCOLONNE 26
#define MAXVAL 5

int main() {
	srand(time(NULL));
	int a[MAXRIGHE][MAXCOLONNE], b[MAXRIGHE][MAXCOLONNE], i, j, n_righe, n_colonne, k, l, r, c, cont;
	do {
		printf("Inserire il numero di righe: ");
		scanf("%d", &n_righe);
		printf("Inserire numero di colonne: ");
		scanf("%d", &n_colonne);
	} while (n_righe<0 || n_righe>MAXRIGHE || n_colonne<0 || n_colonne>MAXCOLONNE);
	printf("\n");
	for (i=0; i<MAXRIGHE; i++) {
		for (j=0; j<MAXCOLONNE; j++) {
			a[i][j] = rand()%(MAXVAL+1);
		}
	}
	printf("La matrice randomizzata:\n\n");
	for (i=0; i<MAXRIGHE; i++) {
		for (j=0; j<MAXCOLONNE; j++) {
			printf("%2d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i=0; i<n_righe; i++) {
		for (j=0; j<n_colonne; j++) {
			printf("Inserire il valore della %da riga e %da colonna: ", i+1, j+1);
			scanf("%d", &b[i][j]);
		}
	}
	printf("\nLa matrice di input:\n\n");
	for (i=0; i<n_righe; i++) {
		for (j=0; j<n_colonne; j++) {
			printf("%3d", b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i=0; i<=MAXRIGHE-n_righe; i++) {
		for (j=0; j<=MAXCOLONNE-n_colonne; j++) {
			r = i+1;
			c = j+1;
			cont = 0;
			for (k=0; k<n_righe; k++) {
				for (l=0; l<n_colonne; l++) {
					if (a[k+i][l+j] == b[k][l])
						cont++;
					if (cont==n_righe*n_colonne)
						printf("Corrispondenza trovata alle coordinate (%d, %d)\n", r, c);
				}
			}
		}
	}
	
	return 0;
}
