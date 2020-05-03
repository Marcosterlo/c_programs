#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAXS 25

int check(char *);

int main() {
	int a[MAXS][MAXS], n, j, k, r, s, i;
	char nfile[MAXS], cnt[MAXS];
	FILE *fd;
	printf("Inserire il nome del file di input: ");
	gets(nfile);
	fd=fopen(nfile, "r");
	if (fd!=NULL) {
		printf("Inserire il numero di righe e colonne: ");
		scanf("%d", &n);
		for (j=0; j<n; j++) {
			for (k=0; k<n; k++) {
				fscanf(fd, "%d", &a[j][k]);
			}
		}
		//Analisi righe
		for (j=0; j<n; j++) {
			for (k=0; k<n; k++) {
				cnt[k]=a[j][k];
			}
			if (check(cnt))
				printf("La %da riga non rispetta i requisiti\n", j+1);
		}
		//Analisi colonne
		for (j=0; j<n; j++) {
			for (k=0; k<n; k++) {
				cnt[k]=a[k][j];
			}
			if (check(cnt))
				printf("La %da colonna non rispetta i requisiti\n", j+1);
		}
		//Analisi riquadri
		for (j=0; j<=n-sqrt(n); j+=sqrt(n)) {
			for (k=0; k<=n-sqrt(n); k+=sqrt(n)) {
				i=0;
				for (r=0; r<sqrt(n); r++) {
					for (s=0; s<sqrt(n); s++) {
						cnt[i]=a[j+r][k+s];
						i++;
					}
				}
				if (check(cnt))
					printf("Il riquadro che inizia alla %da riga e %da colonna non rispetta i requisiti\n", j+1, k+1);
			}
		}
	}
	else
		printf("File non trovato\n");
	return 0;
}

int check(char *a) {
	int i, j;
	for (i=0; i<strlen(a)-1; i++) {
		for (j=1; j<strlen(a)-i; j++) {
			if (a[i]==a[i+j])
				return 1;
			if (a[i]<1 || a[i]>strlen(a) || a[i+j]<1 || a[i+j]>strlen(a))
				return 1;
		}
	}
	return 0;
}
