#include <stdio.h>
#include <string.h>

#define MAXS 80

int main() {
	char i, count, a[MAXS];
	printf("Inserire la stringa:\n");
	for (i=0; (a[i]=getchar())!='\n'; i++);
	a[i]='\0';
	for (i=0; a[i]!='\0'; i++) {
		if (isdigit(a[i]))
			count++;
	}
	printf("La stringa contiene %d cifre\n", count);
	return 0;
}
