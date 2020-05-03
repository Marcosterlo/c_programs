#include <stdio.h>
#include <string.h>

#define MAXS 128

int contastr(char *, char *);

int main() {
	char a[MAXS], b[MAXS];
	printf("Inserire la stringa corta: ");
	gets(a);
	printf("Inserire la stringa lunga: ");
	gets(b);
	printf("\nLa prima stringa è contenuta %d volte nella seconda\n", contastr(a, b));
	return 0;
}

int contastr(char a[], char b[]) {
	int cont=0, ricorr=0, i, k;
	for (i=0; i<=strlen(b)-strlen(a); i++) {
		cont=0;
		for (k=0; k<strlen(a); k++) {
			if (a[k]==b[i+k])
				cont++;
			if (cont==strlen(a)) 
				ricorr++;
		}
	}
	return ricorr;
}
