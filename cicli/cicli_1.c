#include <stdio.h>

int main() {
	double v, somma = 0;
	int i;
	for (i = 0; i<20; i++) {
		scanf("%lf", &v);
		somma += v;
	}
	printf("Somma: %lf\n", somma/20);
	return 0;
}
