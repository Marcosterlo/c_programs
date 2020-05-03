#include <stdio.h>

int main() {
	int anno;
	printf("Inserire l'anno: ");
	scanf("%d", &anno);
	if (anno%400 == 0 || (!(anno%100==0) && anno%4==0))
		printf("Bisestile\n");
	else
		printf("Non bisestile\n");
	return 0;
}
