#include <stdio.h>
#include <string.h>

#define MAXS 101

int main() {
	int i, n, tmp, a[MAXS], *p, *q;
	p = a;
	printf("Quanti decimali inserire? ");
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		printf("Inserire il %do numero: ", i+1);
		scanf("%d", &a[i]);
	}
	a[n]='\0';
	printf("La stringa inserita è: ");
	for (i=0; i<n; i++) { 
		printf("%d ", a[i]);
	}
	q = p+n-1;
	while (p<q) {
		tmp = *p;
		*p = *q;
		*q = tmp;
		p++;
		q--;
	}
	printf("\n");
	printf("La stringa invertita è: ");
	for (i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
