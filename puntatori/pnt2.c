#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXS 80

int main() {
	char *p, *q, a[MAXS], i, pal=1;
	printf("Inserire una stringa per verificare che sia palindorma: ");
	for (i=0; (a[i]=getchar())!='\n'; i++);
	a[i]='\0';
	p = a;
	q = a+strlen(a)-1;
	while (p<q) {
		*p = tolower(*p);
		*q = tolower(*q);
		if (*p==*q) {
			p++;
			q--;
		}
		else	
			pal = 0;
			break;
	}
	if (pal)
		printf("Sono un Palindromo!\n");
	else
		printf("Non sono un palindromo :c\n");
	return 0;
}


//DA CORREGGERE
