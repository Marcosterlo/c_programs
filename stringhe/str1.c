#include <stdio.h>
#include <string.h>

#define MAXSTR 80

int main() {
	int i;
	char a[MAXSTR], b[MAXSTR];
	printf("Inserisci la stringa a:\n");
	for (i = 0; (a[i]=getchar())!='\n'; i++);
	a[i] = '\0';
	printf("Inserisci la stringa b:\n");
	for (i = 0; (b[i]=getchar())!='\n'; i++);
	b[i] = '\0';
	printf("La stringa a è \"%s\"\n", a);
	printf("La stringa b è \"%s\"\n", b);
	if ((strlen(a)-strlen(b))<0)
			printf("La stringa %s è la più lunga\n", b);
	if ((strlen(a)-strlen(b))>=0)
			printf("La stringa \"%s\" è la più lunga\n", b);
	return 0;
}
