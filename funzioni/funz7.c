#include <stdio.h>

#define MAXS 100

void ordina(int v[], int len, int ord);

int main() {
	int v[MAXS], len, ord;
	printf("Quanti numeri inserire? ");
	scanf("%d", &len);
	for (int i=0; i<len; i++) {
		printf("Inserire il %do numero: ", i+1);
		scanf("%d", &v[i]);
	}
	printf("\n");
	printf("Inserire 0 per l'ordine decrescente e 1 per l'ordine crescente: ");
	scanf("%d", &ord);
	ordina(v, len, ord);
	printf("Il vettore ordinato è: ");
	for (int i=0; i<len; i++) {
		printf("%3d", v[i]);
	}	
	printf("\n");
	return 0;
}

void ordina(int v[], int len, int ord) {
	int i, k, tmp;
	if (ord) {
		for (i=0; i<len-1; i++) {
			for (k=i+1; k<len; k++) {
				if (v[k]<v[i]) {
					tmp = v[i];
					v[i] = v[k];
					v[k] = tmp;
				}
			}
		}
	}
	else {
		for (i=0; i<len-1; i++) {
			for (k=i+1; k<len; k++) {
				if (v[k]>v[i]) {
					tmp = v[i];
					v[i] = v[k];
					v[k] = tmp;
				}
			}
		}
	}
}
