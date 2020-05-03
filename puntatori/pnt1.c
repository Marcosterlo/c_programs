#include <stdio.h>

#define MAXS 80

int main() {
	int i;
	char *p, a[MAXS];
	printf("Inserire una string: ");
	for (i=0; (a[i]=getchar())!='\n'; i++);
	a[i]='\0';
	p = a;
	while (*p!='\0')
		p++;
	printf("Il numero totale di caratteri è di %ld\n", p-a);
	return 0;
}
