#include <stdio.h>

int main() {
	int i, var, magg = 0, somma, min, num;
	double media;
	printf("Inserisci il numero di numeri da calcolare: ");
	scanf("%d", &num);
	scanf("%d", &var);
	magg = var;
	somma = var;
	min = var;
	for (i = 0; i<num-1; i++) {
		scanf("%d", &var);
		if (var>magg)
			magg = var;
		if (var<min)
			min = var;
		somma += var;
	}
	media = somma/num;
	printf("Il maggiore è %d, il minore è %d, la somma è %d, la media è %g\n", magg, min, somma, media);
	return 0;
}
