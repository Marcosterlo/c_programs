#include <stdio.h>

int main() {
	int matricola, sesso, stipendio;
	printf("Inserire il numero di matricola:\n");
	scanf("%d", &matricola);
	printf("Inserire il sesso (0 per uomo e 1 per donna):\n");
	scanf("%d", &sesso);
	printf("Inserire lo stipendio medio:\n");
	scanf("%d", &stipendio);
	if (sesso==0)
		printf("Il numero di matricola è %d e la media è rispettata, grazie ar cazzo è un uomo\n", matricola);
	else {
		if (stipendio>=1500)
			printf("Il suo stipendio è maggiore o uguale alla media, she's a strong independent woman\n");
		else
			printf("Il suo stipendio è sotto la media, datore di lavoro sessita che non sei altro\n");
	}
	return 0;
}
