#include <stdio.h>

int a, b, c;

int main () {
	printf("Inserire i 3 numeri di cui verificare il maggiore: ");
	scanf("%d %d %d", &a, &b, &c);
	if (a>b && a>c) {
		if (b>c)
			printf("L'ordine è %d %d %d\n", a, b, c);
		else 
			printf("L'ordine è %d %d %d\n", a, c,  b);
	}	
	else if (b>c) {
		if (c>a)
			printf("L'ordine è %d %d %d\n", b, c, a);
		else 
			printf("L'ordine è %d %d %d\n", b, a, c);
	}
	else {
	     	if (a>b)	
			printf("L'ordine è %d %d %d\n", c, a, b);
		else
			printf("L'ordine è %d %d %d\n", c, b, a);
	}
	return 0;
}
