#include <stdio.h>
#include <string.h>

#define MAXS 80

int main() {
	char i, a[MAXS];
	printf("Inserire la stringa in minuscolo:\n");
	for (i=0; (a[i]=getchar())!='\n'; i++);
	a[i] = '\0';
	for (i=0; a[i]!='\0'; i++)
		a[i] = (char)toupper(a[i]);
	printf("La stringa in maiuscolo è \"%s\"\n", a);
	return 0;
}
