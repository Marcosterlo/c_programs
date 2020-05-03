#include <stdio.h>

int main() {
	int matricola;
	printf("Inserire il numero di matricola:\n");
	scanf("%d", &matricola);
	switch (matricola) {
	case (1):
		printf("Squadra rossa\n");
		break;
	case (2):
		printf("Squadra verde\n");
		break;
	case (3):
		printf("Squadra blu\n");
		break;
	case (4):
		printf("Squadra rossa\n");
		break;
	case (5):
		printf("Squadra verde\n");
		break;
	case (6):
		printf("Squadra nera\n");
		break;
	default:
		printf("Nessuna squadra assegnata\n");
	}
	return 0;
}
