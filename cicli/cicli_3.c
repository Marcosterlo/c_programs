#include <stdio.h>

int main() {
	double somma = 0, media, v;
	int count = 0;
	printf("Inserire numeri compresi tra 18 e 30 per calcolarne somma e media\n");
	scanf("%lf", &v);
	if (v<=30 && v>=18) {
		do {
		somma += v;
		count++;
		scanf("%lf", &v);
		} while (v<=30 && v>=18);
		printf("La somma è %g e la media è %g\n", somma, somma/count);
	}
	else
		printf("Nessun valore valido\n");
	return 0;
}
