#include <stdio.h>

#define MAXI 100

int main() {
	int v[MAXI], n, i;
	printf("Quanti valori introdurre? ");
	scanf("%d", &n);
	if (n>0 && n<=MAXI) {
		for (i=0; i<n; i++) {
			printf("Introduci il %do valore: ", i+1);
			scanf("%d", &v[i]);
		}
		for (i=n-1; i>=0; i--) 
			printf("%d ", v[i]);
	}
	else
		printf("Il valore inserito non è corretto");
	printf("\n");
	return 0;
}
