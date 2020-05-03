
/* PROGRAMMA SBAGLIATO DA CORREGGERE, L'IDEALE SAREBBE FAR FUNZIONARE POW MA NON C RIESCO */

#include <stdio.h>
#include <math.h>

float cap, tas, dur, i, parz;

int main() {
	printf("Inserire il capitale iniziale: ");
	scanf("%f", &cap);
	printf("Inserire il tasse di interesse annuo: ");
	scanf("%f", &tas);
	printf("Inserire la durata dell'investimento: ");
	scanf("%f", &dur);
	parz = 1+tas;
	/* Ho provato con le iterazioni ma non funziona probabilmente perchè i è un float */
	for (i = 0; i<=dur; i++)
		parz = parz*(1+tas);
	printf("Il montante ammonta a %f\n", cap*parz);
	return 0;
}

