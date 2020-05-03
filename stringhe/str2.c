#include <stdio.h>
#include <string.h>

#define MAXSTR 80

int main() {
	char i;
	char a[MAXSTR], b[MAXSTR];
	printf("Inserire la stringa a:\n");
	for (i=0; (a[i]=getchar())!='\n'; i++);
	a[i] = '\0';
	printf("Inserire la stringa b:\n");
	for (i=0; (b[i]=getchar())!='\n'; i++);
	b[i] = '\0';
	printf("La stringa a è \"%s\"\n", a);
	printf("La stringa b è \"%s\"\n", b);
	if (strcmp(a, b)>=0)
			printf("La stringa \"%s\" è la maggiore\n", b);
	else
			printf("La stringa \"%s\" è la maggiore\n", a);
	return 0;
}
