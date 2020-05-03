#include <stdio.h>

#define MAXS 5

int push(int v[], int val, int *p) {
	if (p<v+MAXS) {
		*p++=val;
		printf("Il vettore ora è: ");
		for (int i=0; i<MAXS; i++)
			printf("%d ", v[i]);
		printf("\n");
		return 0;
	}
	else {
		printf("stack pieno\n");
		return 1;
	}
}

int pop(int v[], int val, int *p) {
	if (p>v) {
		p--;
		val=*p;
		*p=0;
		for (int i=0; i<MAXS; i++)
			printf("%d ", v[i]);
		printf("\n");
		return 0;
	}
	else {
		printf("stack vuoto\n");
		return 1;
	}
}
