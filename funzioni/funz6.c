#include <stdio.h>
#include <string.h>

#define MAXS 128

void undup(char *);

int main() {
	char a[MAXS];
	printf("Inserire la stringa: ");
	gets(a);
	undup(a);
	printf("La stringa unduppata è %s\n", a);
	return 0;
}

void undup(char a[]) {
	char b[MAXS]="";
	int i, k, cont=0, s=1;
	b[0]=a[0];
	for (i=0; i<strlen(a); i++) {
		cont=0;
		for (k=0; k<strlen(b); k++) {
			if (a[i]==b[k])
				break;
			else
				cont++;
			if (cont==strlen(b)) {
				b[s]=a[i];
				s++;
			}
		}
	}
	strcpy(a, b);
	a[strlen(a)]='\0';
}
