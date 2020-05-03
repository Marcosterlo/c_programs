#include <stdio.h>

int a, b;

int main() {
	printf("Inserire i valori dei due numeri: ");
	scanf("%d %d", &a, &b);
	if (a > b) 
		printf("Il maggiore è %d\n", a);
	else
		printf("Il maggiore è %d\n", b);
	return 0;
}
