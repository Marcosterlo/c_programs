#include <stdio.h>

int main() {
	double somma = 0, media, v;
	int i, n;
	printf("Di quanti numeri vuoi calcolare somma e media?");
	scanf("%d", &i);
	for (n = 0; n<i; n++) {
		scanf("%lf", &v);
		somma += v;
	}
	printf("La somma è %g e la media è %g\n", somma, somma/n);
	return 0;
}
