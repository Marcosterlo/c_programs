#include <stdio.h>

int main() {
	int n1 = 1, n2 = 1, n3, i = 0, num;
	printf("Inserire fino a che numero massimo calcolare: ");
	scanf("%d", &num);
	printf("1 1 ");
	for (n3 = 2; n3<=num; n3 = n1 + n2) {
		printf("%d ", n3);
		n1 = n2;
		n2 = n3;
	} 
	printf("\n");
	return 0;
}
