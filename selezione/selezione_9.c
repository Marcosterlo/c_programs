#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	printf("Inserire i coefficienti dell'equazione: ");
	scanf("%d %d %d", &a, &b, &c);
	if (b*b-4*a*c > 0) 
		printf("Le soluzioni sono reali e sono %.2lf e %.2lf\n", (-b +sqrt(b*b-4*a*c))/2*a, (-b -sqrt(b*b-4*a*c))/2*a);
	else if (b*b-4*a*c == 0)
		printf("Le soluzioni coincidono e sono %d\n", -b/2*a);
	else
		printf("Soluzioni non reali\n");
	return 0;
}
