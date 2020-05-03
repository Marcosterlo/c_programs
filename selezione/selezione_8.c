#include <stdio.h>

int main() {
	int voto;
	printf("Inserire il voto: ");
	scanf("%d", &voto);
	switch (voto) {
	case (18):
		printf("Appena ufficiente\n");
		break;
	case (19):
	case (20):
		printf("Basso\n");
		break;
	case (21):
	case (22):
	case (23):
		printf("Medio\n");
		break;
	case (24):
	case (25):
	case (26):
		printf("Buono\n");
		break;
	case (27):
	case (28):
	case (29):
		printf("Alto\n");
		break;
	case (30):
		printf("Massimo\n");
		break;
	default:
		if (voto>0 && voto<18)
			printf("Insufficiente\n");
		else
			printf("Impossibile\n");
	}
	return 0;
 }
