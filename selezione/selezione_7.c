#include <stdio.h>

int main() {
	int voto;
	printf("Inserire il voto: ");
	scanf("%d", &voto);
	if (voto < 18 && voto>0)
		printf("Insufficiente\n");
	else if (voto == 18)
		printf("Appena sufficiente\n");
	else if (voto < 21 && voto > 18)
		printf("Basso\n");
	else if (voto >20 && voto<24)
		printf("Medio\n");
	else if (voto>23 && voto<27)
		printf("Buono\n");
	else if (voto>26 && voto<30)
		printf("Alto\n");
	else if (voto  == 30)
		printf("Massimo\n");
	else
		printf("Impossibile\n");
	return 0;
}
