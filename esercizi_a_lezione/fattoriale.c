#include <stdio.h>

int main() {
	int n, i, esci;
	double fact;
	do {
		do {
			printf("Inserire un numero di cui calcolare il fattoriale: ");
			scanf("%d", &n);
		} while (n<0);
		fact=1;
		if (n==0)
			printf("Il fattoriale è 1\n");
		else {
			for (i=n; i>0; i--) {
				fact=fact*i;
			}
			printf("Il fattoriale è %.0lf\n", fact);
		}
		do {
			printf("Vuoi ripetere? (1 per si, 0 per no): ");
			scanf("%d", &esci);
		} while (esci!=1 && esci!=0);
	} while(esci);
	return 0;
}
