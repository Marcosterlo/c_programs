#include <stdio.h>

int main() {
	// Formula: x_i+1_ = 1/2(x_i +A/x_i)
	double x1, x2, a;
	int i, uscita = 1;
	printf("Inserire il valore di cui calcolare la radice quadrata: ");
	scanf("%lf", &a);
	for (x1 = a; uscita; x1 = x2) {
		x2 = 0.5*(x1 +a/x1);
		if (x2 == x1)
			uscita = 0;
	}
	printf("%g\n", x2);
	return 0;
}
