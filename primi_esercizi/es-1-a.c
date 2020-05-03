#include <stdio.h>

int a, b, c;

int main() {
	printf("Inserire tre numeri: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("A-B=%d A-B+C=%d A-B-C=%d\n", a-b, a-b+c, a-b-c);
	return 0;
}
