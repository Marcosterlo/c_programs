#include <stdio.h>

#define MAXI 100

int main() {
	int a[MAXI], somma=0, max, min, media, num, i;
	printf("Quanti numeri vuoi inserire? ");
	scanf("%d", &num);
	printf("Inserire il %do numero: ", 1);
	scanf("%d", &a[0]);
	somma += a[0];
	max = a[0];
	min = a[0];
	for (i=1; i<num; i++) {
		printf("Inserire il %do numero: ", i+1);
		scanf("%d", &a[i]);
		somma += a[i];
		if (a[i] < min)
			min = a[i];
		if (a[i] > max)
			max = a[i];
	}
	printf("La somma equivale a %d, la media equivale a %d, il massimo è %d, il minimo è %d\n", somma, somma/num, max, min);
	return 0;
}
