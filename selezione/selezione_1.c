#include <stdio.h>

int main () {
	int a, b;
	printf("Inserie due numeri: ");
	scanf("%d %d", &a, &b);
	if (a > b)
		printf("Il maggiore è %d\n", a);
	else
		printf("il maggiore è %d\n", b);
	return 0; 
}
