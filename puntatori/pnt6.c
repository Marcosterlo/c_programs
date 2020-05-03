#include <stdio.h>
#include <string.h>

#define MAXS 80

int main() {
	char match=1, *p, *q, a[MAXS];
	printf("Inserire la stringa: ");
	for (p=a; (*p=getchar())!='\n'; p++);
	*p='\0';
	for (p=a, q=a+(int)((strlen(a)+1)/2.0); q<a+strlen(a)-1; p++, q++) {
		if (*p!=*q) {
			match = 0;
			goto exit;
		}
	}
	exit:
	if (match)
		printf("Match!\n");
	else
		printf("Niente match :c\n");	
	return 0;
}

