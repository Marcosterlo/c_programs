#include <stdio.h>

int main () {
	int matricola;
	printf("Inserire numero di matricola: ");
	scanf("%d", &matricola);
	switch (matricola%3) {
	case (1):
		printf("Prima squadra\n");
		break;
	case (2):
		printf("Seconda squadra\n");
		break;
	default:
		printf("Terza squadra\n");
	}
	return 0;
}
