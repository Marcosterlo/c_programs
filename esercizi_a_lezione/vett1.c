#include <stdio.h>

#define MAXS 100

int main() {
	int vett[MAXS], n;
	printf("Quanti valori inserire? ");
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		printf("Inserisi il %do numero: ", i+1);
		scanf("%d", &vett[i]);
	}
	printf("Il vettore invertito è: ");
	for (int i=n-1; i>=0; i--) {
		printf("%d ", vett[i]);
	}
	printf("\n");
	return 0;
}
