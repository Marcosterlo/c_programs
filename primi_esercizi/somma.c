#include <stdio.h>

int add1, add2;

int main() {
	printf("Inserisci il primo addendo: ");
	scanf("%d", &add1);
	printf("Inserisci il secondo addendo: ");
	scanf("%d", &add2);
	printf("La somma dei due numeri è %d\n", add1 + add2);
	return 0;
}
