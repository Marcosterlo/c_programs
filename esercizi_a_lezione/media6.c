#include <stdio.h>

int main() {
	float tot=0, tmp=0;
	int n=0;
	do {
		tot+=tmp;
		n++;
		printf("Inserire il nuovo valore: ");
		scanf("%f", &tmp);
	} while (tmp>17 && tmp<31);
	if (n==1)
		printf("Valore fuori range\n");
	else
		printf("La media è uguale a %.2f\n", tot/(float)(n-1));
	return 0;
}
