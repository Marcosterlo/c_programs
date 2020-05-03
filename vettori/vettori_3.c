#include <stdio.h>

#define MAXI 100

int main() {
	int a[MAXI], b[MAXI], num, i, c[MAXI];
	printf("Quanti numeri inserire? ");
	scanf("%d", &num);
	if (num>0 && num<=MAXI) {
		for (i=0; i<num; i++) {
			printf("Inserisci il %do valore del vettore A: ", i+1);
			scanf("%d", &a[i]);
		}
		printf("\n");
		for (i=0; i<num; i++) {
			printf("Inserisci il %do valore del vettore B: ", i+1);
			scanf("%d", &b[i]);
			c[i] = a[i] + b[i];
		}
		printf("\n");
		for (i=0; i<num; i++) {
			if (i%2==1)
				printf("%d ", c[i]);
		}
		for (i=0; i<num; i++) {
			if (i%2==0)
				printf("%d ", c[i]);
		}
	}
	else
		printf("Valore inserito non valido");
	printf("\n");
	return 0;
}
