#include <stdio.h>

double media(double v[], int len);

int main() {
	int lena=3, lenb=3, i;
	double a[lena], b[lenb];
	printf("Inserire lunghezza del primo vettore: ");
	scanf("%d", &lena);
	printf("Inserire lunghezza del secondo vettore: ");
	scanf("%d", &lenb);
	for (i=0; i<lena; i++) {
		printf("Inserire il %do valore del primo vettore: ", i+1);
		scanf("%lf", &a[i]);
	}
	printf("\n");
	for (i=0; i<lenb; i++) {
		printf("Inserire il %do valore del secondo vettore: ", i+1);
	   	scanf("%lf", &b[i]);
	}
	printf("La media del primo vettore è %.2lf ", media(a, lena));
	printf("la media del secondo vettore è %.2lf\n", media(b, lenb));
	return 0;
}

double media(double v[], int len) {
	double med;
	int s;
	for (s=0; s<len; s++) 
		med+=v[s];
	return med/(double)(len);
}

