#include <stdio.h>

int main() {
	int num, count, fatt = 1;
	printf("Inserire il numero di cui calcolare il fattorale: ");
	scanf("%d", &num);
	for (count = num; count>0; count--) {
		fatt *= count;
	}
	printf("Il fattoriale è %d\n", fatt);
	return 0;
}
