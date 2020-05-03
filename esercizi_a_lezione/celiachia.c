#include <stdio.h>
/*
#define MAXRIGHE 20
#define MAXCOLONNE 26

int main() {
	int a[MAXRIGHE][MAXCOLONNE], b[MAXRIGHE][MAXCOLONNE], i, j, n_righe, n_colonne, k, l, r, c, cont;
	do {
		printf("Quanto è celiaco Gabbo oggi?: ");
		scanf("%d", &n_righe);
		printf("Quanto vorresti immergerlo nella farina da 1 a 26?: ");
		scanf("%d", &n_colonne);
	} while (n_righe<0 || n_righe>MAXRIGHE || n_colonne<0 || n_colonne>MAXCOLONNE);
	printf("\n");
	while (1) {
		for (j=0; j<MAXCOLONNE; j++) {
			printf("Celiaco ");
		}
		printf("\n");
	}
	return 0;
}*/
void f() {
	int a = 0;
	static int b = 0;
	printf("\n a:%d b:%d", a, b);
	a++;
	b++;
}
int main() {
	int j;
	for (j=0; j<3; j++)
		f();
	printf("\n");
	return 0;
}
