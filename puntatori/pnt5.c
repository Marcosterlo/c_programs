#include <stdio.h>

#define MAXS 100

int main() {
	int *p, *q, a[MAXS], n, tmp;
	do {
		printf("Quanti numeri inserire? ");
		scanf("%d", &n);
	} while (n<0 || n>MAXS);
	q = a+n;
	for (p=a; p<q; p++) {
		printf("Inserisci il %ldo valore: ", p-a+1);
		scanf("%d", p);
	}
	printf("La lista inserita è: ");
	for (p=a; p<q; p++) {
		printf("%d ", *p);
	}
	printf("\n");
	for (p=a; p<a+n-1; p++) {
		for (q=p+1; q<a+n; q++) {
			if (*p>*q) {
				tmp = *p;
				*p = *q;
				*q = tmp;
			}
		}
	}
	q = a+n;
	printf("La lista ordinata è: ");
	for (p=a; p<q; p++) {
		printf("%d ", *p);
	}
	printf("\n");
	return 0;
}
