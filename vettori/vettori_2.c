#include <stdio.h>
#define MAXI 100

int main() {
	int num, i, v[MAXI];
	printf("Quanti numeri inserire? ");
	scanf("%d", &num);
	if (num>0 && num<=MAXI) {
		for (i=0; i<num; i++) {
			printf("Inserire il %do valore: ", i+1);
			scanf("%d", &v[i]);
		}
		for (i=0; i<num; i++) {
			if (v[i]%2==0)
				printf("%d ", v[i]);
		}
		for (i=num-1; i>=0; i--) {
			if (v[i]%2==1)
				printf("%d ", v[i]);
		}
	}
	else 
		printf("Valore inserito errato");
	printf("\n");
	return 0;
}
