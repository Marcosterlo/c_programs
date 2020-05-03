#include <stdio.h>
#include <string.h>

#define MAXS 128

void rovescia(char a[]);

int main() {
	char a[MAXS];
	printf("Inserire una stringa: ");
	gets(a);
	rovescia(a);
	printf("\nLa stringa invertita è %s\n", a);
	return 0;
}

void rovescia(char a[]) {
	char *p, *q, tmp;
	p=a;
	q=a+strlen(a)-1;
	for (; p<q; p++, q--) {
		tmp = *p;
		*p = *q;
		*q = tmp;
	}
}
