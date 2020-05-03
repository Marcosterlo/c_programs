#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAXI 100

/*SELECTION SORT*/

int main() {
	clock_t t;
	int a[MAXI], i, j, tmp;
	for (i=0; i<MAXI; i++) {
		a[i] = rand()%1000;
	}
	for (i=0; i<MAXI; i++) {
		printf("%4d", a[i]);
	}
	printf("\n");
	t = clock();
	for (i=0; i<MAXI-1; i++) {
		for (j=i+1; j<MAXI; j++) {
			if (a[j] < a[i]) {
				tmp = a[j];
				a[j] = a[i];
				a[i] = tmp;
			}
		}
	}
	t = clock() -t;
	for (i=0; i<MAXI; i++) {
		printf("%4d", a[i]);
	}
	printf("\n");
	printf("Il sorting è avvenuto in %f secondi\n", ((float)t)/CLOCKS_PER_SEC);
	return 0;
}
