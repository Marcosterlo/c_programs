#include <stdio.h>

int main() {
	double a, b, c, d;
	printf("Inserire 4 float: ");
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
	printf("I numeri alla seconda cifra decimale sono: %.2f, %.2f, %.2f, %.2f\n", a, b ,c, d);
	return 0;
}
