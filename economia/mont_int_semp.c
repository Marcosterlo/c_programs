#include <stdio.h>

float cap, tas, dur;

int main() {
	printf("Inserire il capitale iniziale: ");
	scanf("%f", &cap);
	printf("Inserire il tasse di interesse annuo: ");
	scanf("%f", &tas);
	printf("Inserire la durata dell'investimento: ");
	scanf("%f", &dur);
	printf("Il montante ammonta a %f\n", cap*(1+(tas/100)*dur));
	return 0;
}
