#include <stdio.h>

int main() {
	int matricola;
	printf("Inserire il numero di matricola: ");
	scanf("%d", &matricola);
	if (matricola%3==1)
		printf("Prima squadra\n");
	else if (matricola%3==2)
		printf("Seconda squadra\n");
	else
		printf("Terza squadra\n");
	return 0;
}
