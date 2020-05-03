#include <stdio.h>

#define MAXS 4

int sommaVett(int a[], int b[], int s[]);

int main()  {
	int i, a[MAXS], b[MAXS], s[MAXS];
	//creazione di valori casuali per i 2 vettori da sommare, il contenuto di s per ora è ininfluente
	for (i=0; i<MAXS; i++) {
		printf("Inserire il %do valore del primo vettore: ", i+1);
		scanf("%d", &a[i]);
	}
	for (i=0; i<MAXS; i++) {
		printf("Inserire il %do valore del secondo vettore: ", i+1);
		scanf("%d", &b[i]);
	}
	printf("Il primo vettore è: ");
	for (i=0; i<MAXS; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("Il secondo vettore è: ");
	for (i=0; i<MAXS; i++) {
		printf("%d ", b[i]);
	}
	printf("\n");
	sommaVett(a, b, s);
	printf("Il vettore somma è: ");
	for (i=0; i<MAXS; i++) {
		printf("%d ", s[i]);
	}
	printf("\n");
	return 0;
}

int sommaVett(int a[], int b[], int s[]) {
	int i;
	for (i=0; i<MAXS; i++) {
		s[i]=a[i]+b[i];
	}
	s[MAXS]='\0';
}
