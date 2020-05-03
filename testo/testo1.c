#include <stdio.h>
#include <string.h>

#define MAXS 20

int main() {
	char nfile[MAXS], a[MAXS], c;
	int x=0, m=0, exit=0, tot=0, n, max, min;
	printf("Inserire il nome del file: ");
	gets(nfile);
	FILE *fd=fopen(nfile, "r");
	if (fd!=NULL) {
		do {
			printf("Inserire modalità:\n1) Lettura\n2) Scrittura\n3) Aggiungere\n4) Esecuzione esercizio -> ");
			scanf("%d", &m);
			switch (m) {
				case (1): 
					fd=fopen(nfile, "r");
					fscanf(fd, "%d", &x);
					printf("L'intero letto è %d\n", x);
					fclose(fd);
					break;
				case (2): 
					fd=fopen(nfile, "w");
					printf("Inserire la stringa da scrivere: ");
					scanf("%s", a);
					fprintf(fd, "%s\n", a);
					fclose(fd);
					break;
				case (3):
					fd=fopen(nfile, "a");
					printf("Inserire la stringa da aggiungere: ");
					scanf("%s", a);
					fprintf(fd, "%s\n", a);
					fclose(fd);
					break;
				case (4):
					fd=fopen(nfile, "r");
					min=0;
					max=0;
					x=0;
					n=0;
					fscanf(fd, "%d", &max);
					min=max;
					x=max;
					tot=x;
					n=1;
					while (fscanf(fd, "%d", &x)!=EOF) {
						tot+=x;
						n++;
						if (x>max)
							max=x;
						if (x<min)
							min=x;
					} 
					if (n==1 && x==0 && max==0 && min==0) {
						printf("Unici valori inseriti sono 0 o file vuoto\n");
						break;
					}
					else {
						printf("Il totale è %d, il massimo è %d, il minimo è %d e la media è %.2lf\n", tot, max, min, (float)(tot)/(float)(n));
						break;
					}
				default:
					printf("Valore inserito non valido\n");
			}
			printf("Ripetere il processo? (1 per sì e 0 per no) -> ");
			scanf("%d", &exit);
		} while (exit==1);
	}
	else
		printf("File non trovato\n");
	return 0;
}
