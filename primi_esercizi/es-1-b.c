#include <stdio.h>

int a, b, scamb;

int main() {
	printf("Inserire il numero A: ");
	scanf("%d", &a);
	printf("Inserire il numero B: ");
	scanf("%d", &b);
	scamb = b;
	b = a;
	a = scamb;
	printf("Il numero A è ora %d ed il numero B è ora %d\n", a, b);
        return 0;
}	
