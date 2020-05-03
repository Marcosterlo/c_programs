#include <stdio.h>

#define MAXS 10

int main() {
	int mx[MAXS][MAXS], r, c, i, k, max, min, tot=0;
	printf("Quante righe? ");
	scanf("%d", &r);
	printf("Quante colonne? ");
	scanf("%d", &c);
	for (i=0; i<r; i++) {
		for (k=0; k<c; k++) {
			printf("Inserire il valore della %da riga e %da colonna: ", i+1, k+1);
			scanf("%d", &mx[i][k]);
		}
	}
	min=mx[0][0];
	max=min;
	printf("La matrice è: \n");
	for (i=0; i<r; i++) {
		for (k=0; k<c; k++) {
			printf("%d ", mx[i][k]);
			if (mx[i][k]<min)
				min = mx[i][k];
			if (mx[i][k]>max)
				max = mx[i][k];
			tot+=mx[i][k];
		}
		printf("\n");
	}
	printf("Il valore massimo è %d, il valore minimo è %d, il totale è %d, la media è %.2lf\n", max, min, tot, (float)(tot)/(float)(r*c));
	return 0;
}
