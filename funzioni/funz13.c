#include "funz13.h"
#include <stdio.h>

int main() {
	static int v[MAXS];
	static int *p=v;
	int pus=0, val, ripeti;
	do {
		printf("Inserire un valore (1) o estrarlo? (0) ");
		scanf("%d", &pus);
		if (pus) {
			printf("Inserire una valore da aggiungere: ");
			scanf("%d", &val);
			push(v, val, p);
			p++;
		}
		else {
			pop(v, val, p);
			printf("Il valore estratto è %d\n", val);
			p--;
		}
		do{
			printf("Ripetere il procedimento? si(1) no(0) ");
			scanf("%d", &ripeti);
		} while (ripeti!=0 && ripeti !=1);
	} while (ripeti);
	return 0;
}
