#include <stdio.h>

#define MAXI 100

int main() {
	int a[MAXI], num, i, val, lung, lung_max;
	do {
		printf("Quanti numeri inserire?");
		scanf("%d", &num);
	} while (num<0 || num>MAXI);
	for (i=0; i<num; i++) {
		printf("Inserire il %do valore: ", i+1);
		scanf("%d", &a[i]);
	}
	lung = 1;
	lung_max = 1;
	val = a[0];
	for (i=1; i<num; i++) {
		if (a[i] == a[i-1]) {
			lung++;
			if (lung>lung_max) {
				lung_max = lung;
				val = a[i];
			}
		}
		else
			lung = 1;
	}
	printf("Il valore ripetuto più volte è il %d, ripetuto %d volte\n", val, lung_max);
	return 0;
}
