#include <stdio.h>

int main() {
	double a;
	printf("Inserisci un float: ");
	scanf("%lf", &a);
	printf("\nIl numero nelle diverse rappresentazioni sono %f, %e, %g.\n", a, a, a);
	return 0;
}
