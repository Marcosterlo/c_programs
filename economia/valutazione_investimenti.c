#include <stdio.h>
#include <math.h>

float van, inv, flus, tas, flusso_iter, tot, mesi, mesi_att;
int n, dur, count, count_att;

int main() {
	printf("Inserire la durata dell'investimento: ");
	scanf("%d", &dur);
	printf("Inserire il tasso di interesse: ");
	scanf("%f", &tas);
	printf("Inserire l'investimento iniziale: ");
	scanf("%f", &inv);
	/* Definisco un array con i valori dei flussi inseriti, utile per le iterazioni*/
	float flussi[dur];
	for (n=0; n<dur; n++) {
		printf("Inserire il flusso del tempo %d: ", n+1);
		scanf("%f", &flusso_iter);
		flussi[n] = flusso_iter;
	}
	/*Applico la formula del VAN*/
	for (n=1; n<=dur; n++) {
		van = van + flussi[n-1]/pow(1+(tas)/(100), n);
	}
	van = van - inv;
	printf("Il van corrisponde a %f\n", van);
	/*La formula dell'EAA è direttamente inserita nel printf*/
	printf("L'EAA corrisponde a %f\n", (tas/100*van)/(1-1/pow(1+tas/100, dur)));
	/*inzio il calcolo de TIR, a valori di van = 0 o <0 si ritorna il tasso di interesse attuale*/
	if (van > 0) {
		tas = tas+0.0001;
		do {
			van = -inv;
			for (n=1; n<=dur; n++) {
				van = van + flussi[n-1]/pow(1+(tas)/(100), n);
			}
			tas=tas+0.0001;
		} while (van>0);
	printf("Il TIR è %f\n", tas);
	}
	else
	printf("Il TIR è %f\n", tas);
	/*Calcolo del payback normale e attualizzato*/
	tot = -inv;
	n=0;
	while (tot<0 && n<dur) { /*Stoppo le iterazioni al conseguimento del tot > 0 o della fine delle ricorrenze*/
		tot = tot + flussi[n];
		count++;
		n++;
	}
	/*Con mesi e mesi_att calcolo i mesi con una proporzione*/
	mesi = 12*(1-(tot)/(flussi[n]));
	printf("Il payback è di %d anni e %f mesi\n", count-1, mesi);
	tot = -inv;
	n=0;
	while (tot<0 && n<dur) {
		tot = tot + flussi[n]/pow(1+tas/100, n+1);
		count_att++;
		n++;
	}
	/*AGGIUSTARE IL mesi_att!!*/
	mesi_att = 12*(1-tot*pow(1+tas/100, n+1)/(flussi[n-1]));
	printf("Il payback attualizzato è di %d anni e %f mesi\n", count_att-1, mesi_att);
	return 0;
}
