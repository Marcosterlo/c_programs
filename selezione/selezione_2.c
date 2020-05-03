#include <stdio.h>

int main () {
	int a;
	printf("Inserire un numero di cui verificare la parità: ");
	scanf("%d", &a);
	if (a%2==0)
		printf("Il numero è pari\n");
	else 
		printf("Il numero è dispari\n");
	return 0;
}
