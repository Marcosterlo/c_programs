#include <stdio.h>

#define MAXI 100

int main() {
	double a[MAXI], media;
	int i, num;
	do {
	printf("Inserire quanti numeri inserire: ");
	scanf("%d", &num);
	} while (num<3 || num>MAXI);
	for (i=0; i<num; i++) {
		printf("Inserisci il %do valore: ", i+1);
		scanf("%lf", &a[i]);
	}
	for (i=0; i<num-2; i++) {
		printf("%g ", (a[i]+a[i+1]+a[i+2])/3.0);
	}
	printf("\n");
	return 0;
}
