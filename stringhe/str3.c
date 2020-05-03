#include <stdio.h>
#include <string.h>

#define MAXS 80

int main() {
	char i, as, bs, a[MAXS], b[MAXS];
	printf("Inserire la prima stringa:\n");
	for (i=0; (a[i]=getchar())!='\n'; i++);
	a[i] = '\0';
	printf("Inserire la seconda stringa:\n");
	for (i=0; (b[i]=getchar())!='\n'; i++);
	b[i] = '\0';
	printf("La prima stringa è \"%s\"\n", a);
	printf("La seconda stringa è \"%s\"\n", b);
	for (i=0; a[i]!='\0'; i++) {
		as++;
	}
	for (i=0; b[i]!='\0'; i++) {
		bs++;
	}
	printf("La prima stringa è di %d caratteri\n", as);
	printf("La seconda stringa è di %d caratteri\n", bs);
	return 0;
}
