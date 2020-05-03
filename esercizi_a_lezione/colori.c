#include <stdio.h>

int main() {
	int colore, rosso=1, arancione=2, blu=3, viola=4, bianco=5;
	printf("Inserire un colore selezionando il numero corrispondente:\n1) rosso\n2) arancione\n3) blu\n4) viola\n5) bianco\n");
	scanf("%d", &colore);
	if (colore==1 || colore==2)
		printf("Il colore è caldo\n");
	else if (colore==3 || colore==4)
		printf("Il colore è freddo\n");
	else if (colore==5)
		printf("Il colore è neutro\n");
	else
		printf("Il colore inserito non è valido\n");
	return 0;
}
