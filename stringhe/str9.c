/*Verifica palindromo*/
#include <stdio.h>
#include <string.h>

#define MAXS 80

int main() {
	char i, a[MAXS], b[MAXS];
	printf("Inserire la stringa:\n");
	for (i=0; (a[i]=getchar())!='\n'; i++);
	a[i] = '\0';
	for (i=0; i<strlen(a); i++) {
		b[strlen(a)-1-i] = a[i];
	}
	b[strlen(a)] = '\0';
	printf("a: %s\n", a);
	printf("b: %s\n", b);
	if (!(strcmp(a, b)))
		printf("Sono un palindromo!\n");
	else
		printf("Non sono un palindromo :c\n");
	return 0;
}
