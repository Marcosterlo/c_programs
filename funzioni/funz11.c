#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXS 100

int parseToIntVett(char *stringa, int vett[], int n);

int main() {
	char s[MAXS];
	int v[MAXS], n;
	printf("Inserire una stringa numerica: ");
	gets(s);
	printf("Inserire quanti valori inserire nel vettore: ");
	scanf("%d", &n);
	n=parseToIntVett(s, v, n);
	printf("Il vettore elaborato è ");
	for (int i=0; i<n; i++)
		printf("%d ", v[i]);
	printf("\n");
	return 0;
}

int parseToIntVett(char *s, int v[], int n) {
	int i=0, k=0;
	char c[2];
	for (i=0; k<n&&s[i]!='\0'; i++) {
		if (isdigit(s[i])) {
			c[0] = s[i];
			c[1]='\0';
			sscanf(c, "%d", &v[k]);
			k++;
		}
	}
	return k;
}
