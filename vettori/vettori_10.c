#include <stdio.h>

#define R 4
#define C 5

int main() {
	int a[R][C], righe, colonne, r, c, i, j, k, l, somma=0;
	do {
		printf("Quante righe ha la matrice? ");
		scanf("%d", &righe);
		printf("Quante colonne ha la matrice? ");
		scanf("%d", &colonne);
		printf("Quante righe ha la sottomatrice? ");
		scanf("%d", &r);
		printf("Quante colonne ha la sottomatrice? ");
		scanf("%d", &c);
	} while (r<0 || c<0 || righe>R || colonne>C || r>righe || c>colonne || righe<0 || colonne<0);
	printf("\n");
	for (i=0; i<righe; i++) {
		for (j=0; j<colonne; j++) {
			printf("Inserire il valore della %da riga e %da colonna: ", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nMatrice inputtata:\n");
	printf("\n");
	for (i=0; i<righe; i++) {
		for (j=0; j<colonne; j++) {
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	//2 for per iterare il posto di inizio della scansione
	for (i=0; i<=righe-r; i++) {
		for (j=0; j<=colonne-c; j++) {
			somma = 0;
			//2 for per scansionare la sottomatrice di turno
			for (k=i; k<i+r; k++) {
				for (l=j; l<j+c; l++) {
					somma += a[k][l];
				}
			}
			if (somma == 0) {
				//Se la sottomatrice matcha viene printata
				printf("Sottomatrice trovata:\n\n");
				for (k=i; k<i+r; k++) {
					for (l=j; l<j+c; l++) {
						printf("%3d", a[k][l]);
					}
					printf("\n");
				}
				printf("\n");
			}
		}
	}
	return 0;
}
