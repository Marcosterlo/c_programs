#include <stdio.h>
#include <time.h>

#define MAXI 100

/*SELECTION SORT*/

int main() {
	clock_t t;
	int a[MAXI], num, i, j, tmp;
	printf("Inserire quanti elementi deve contenere il vettore: ");
	scanf("%d", &num);
	printf("\n");
	for (i=0; i<num; i++) {
		printf("Inserire il %do valore: ", i+1);
		scanf("%d", &a[i]);
	}
	for (i=0; i<num; i++) {
		printf("%3d", a[i]);
	}
	printf("\n");
	t = clock();
	for (i=num-1; i>0; i--) {
		for (j=i-1; j>=0; j--) {
			if (a[j] < a[i]) {
				tmp = a[j];
				a[j] = a[i];
				a[i] = tmp;
			}
		}
	}
	t = clock() -t;
	for (i=0; i<num; i++) {
		printf("%3d", a[i]);
	}
	printf("\n");
	printf("Il sorting è avvenuto in %f secondi\n", ((float)t)/CLOCKS_PER_SEC);
	return 0;
}
