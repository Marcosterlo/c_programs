#include <stdio.h>
#include <string.h>

#define MAXS 80

int main() {
	char i, a[MAXS], b[MAXS];
	printf("Inserire la stringa più corta:\n");
	for (i=0; (a[i]=getchar())!='\n'; i++);
	a[i] = '\0';
	printf("Inserire la stringa più lunga:\n");
	for (i=0; (b[i]=getchar())!='\n'; i++);
	b[i] = '\0';
	if (strstr(b, a))
		printf("Trovata\n");
	else
		printf("Non trovata\n");
	return 0;
}
