#include <stdio.h>
#include <ctype.h>

#define MAXS 129

int main() {
	int i;
	char a[MAXS], parole, somma_len, cont;
	float media;
	printf("Inserire una frase: ");
	for (i=0; (a[i]=getchar())!='\n'; i++);
	a[i]='\0';
	for (i=0; a[i]!='\0'; i++) {
		if (isalnum(a[i])&&cont) 
			somma_len++;
		else if (isalnum(a[i])&&(!cont)) {
			cont = 1;
			somma_len++;
		} 
		else if (!(isalnum(a[i])) && cont) {
			parole++;
			cont = 0;
		}
	}
	if (cont)
		parole++;
	if (parole==0)
		media=0;
	else 
		media = (float)(somma_len)/(float)(parole);
	printf("Numero di parole: %d\nSomma delle lettere e cifre: %d\nLa media di lettere per parola è di: %.2f\n", parole, somma_len, media);
	return 0;
}
