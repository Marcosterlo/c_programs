/*Verifica se la stringa è composta da due parti uguali: CiaoCiao, se dispari si ignora il carattere centrale CiaoxCiao*/
#include <stdio.h>
#include <string.h>

#define MAXS 80

int main() {
	char i, a[MAXS], b[MAXS];
	printf("Inserire la parola:\n");
	for (i=0; (a[i]=getchar())!='\n'; i++);
	a[i] = '\0';
	if (strlen(a)%2==0) {
		strncpy(b, a, strlen(a)/2);
		b[strlen(a)/2] = '\0';
		strncat(b, a, strlen(a)/2);
		b[strlen(a)] = '\0';
	}
	else if (strlen(a)%2==1) {
		strncpy(b, a, (strlen(a)-1)/2);
		b[(strlen(a)-1)/2] = a[(strlen(a)-1)/2];
		b[(strlen(a)-1)/2+1]= '\0';
		strncat(b, a, (strlen(a)-1)/2);
		b[strlen(a)] = '\0';
	}
	printf("a è %s, b è %s\n", a, b);
	if (!(strcmp(a, b))) 
		printf("Match!\n");
	else
		printf("Niente match\n");
	return 0;
}
