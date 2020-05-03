#include <stdio.h>

int main() {
	int num, magg, var, i;
	printf("Inserire il numero di numeri da controllare: ");
	scanf("%d", &num);
	for (i = 0; i<num; i++) {
		scanf("%d", &var);
		if (var>=magg)
			magg = var;
	}
	printf("Il maggiore è %d\n", magg);
	return 0;
}
