#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXS 80

int main() {
	char minuscole, maiuscole, decimali, altri, a[MAXS], i;
	printf("Inserire la stringa:\n");
	for (i=0; (a[i]=getchar())!='\n'; i++);
	a[i] = '\0';
	for (i=0; a[i]!='\0'; i++) {
		if (isdigit(a[i]))
			decimali++;
		else if (islower(a[i]))
			minuscole++;
		else if (isupper(a[i]))
			maiuscole++;
		else
			altri++;
	}
	printf("Maiuscole: %d Minuscole: %d Cifre: %d Altri: %d\n", maiuscole, minuscole, decimali, altri);
	return 0;
}
