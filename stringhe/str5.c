#include <stdio.h>
#include <string.h>

#define MAXS 80

int main() {
	char i, a[MAXS], b[MAXS];
	printf("Inserire la stringa:\n");
	for (i=0; (a[i]=getchar())!='\n'; i++);
	a[i] = '\0';
	strncpy(b, a, 10);
	if (strchr(b, 'A'))
		printf("Trovata la A\n");
	else
		printf("Non trovata nessuna corrispondenza tra i primi 10 caratteri\n");		
	return 0;
}
