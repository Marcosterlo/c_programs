#include <stdio.h>
#include <string.h>

#define MAXS 101

int main() {
	int i, n, tmp, a[MAXS];
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
	if (n%2==0) {
		for (i=0; i<=(n/2-1); i++) {
			tmp = a[i];
			a[i] = a[n-1-i];
			a[n-1-i] = tmp;
		}
	}
	else {
		for (i=0; i<((n-1)/2); i++) {
			tmp = a[i];
			a[i] = a[n-1-i];
			a[n-1-i] = tmp;
		}
	}
	printf("\n");
	printf("La stringa invertita è: ");
	for (i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
