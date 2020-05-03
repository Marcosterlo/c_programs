#include <stdio.h>

int main() {
	int n;
	float tot=0, max, min;
	do {
	printf("Quanti numeri inserire? ");
	scanf("%d", &n);
	} while (n<=0);
	printf("Inserire il 1o valore: ");
	scanf("%f", &max);
	min=max;
	for (int i=1; i<n; i++) {
		float tmp;
		printf("Inserire il %do valore: ", i+1);
		scanf("%f", &tmp);
		if (tmp>max)
			max=tmp;
		if (tmp<min)
			min=tmp;
	}
	printf("Il numero massimo è %.1f ed il minimo è %.1f\n", max, min);
	return 0;
}
