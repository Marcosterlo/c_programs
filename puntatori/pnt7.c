#include <stdio.h>
#include <string.h>

#define MAXS 80

int main() {
	char *p, *q, a[MAXS], b[MAXS], ricorrenze, cont;
	printf("Inserire la parola più corta: ");
	gets(a);
	printf("Inserire la parola più lunga: ");
	gets(b);
	for (p=a, q=b; q<=b+strlen(b); q++) {
		if (*p==*q) {
			p++; 
			cont++;
		}
		else {
			cont=0;
			p=a;
		}
		if (*p=='\0') {
			if (cont==strlen(a))
				ricorrenze++;
				cont=0;
			p=a;
		}
	}
	printf("La prima stringa è stata trovata %d volte nella seconda\n", ricorrenze);
	return 0;
}
