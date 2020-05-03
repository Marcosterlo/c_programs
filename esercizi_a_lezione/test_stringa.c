#include <stdio.h>
#include <string.h>

int main() {
	char a[50], b[50], spazio_b[50], spazio[]=" ";
	printf("Inserire la prima parola: ");
	scanf("%[^\n]", a);
	printf("Inserire la seconda parola: ");
	scanf("%*c%[^\n]", b);
	printf("%s %s\n", a, b);
	printf("---%s---\n", a);
	strcpy(spazio_b, strcat(spazio, b));
	printf("---%s---\n", a);
	printf("%s\n", spazio_b);
	//i problemi iniziano qui, non capisco perchè si sovrascrive "a"
	printf("---%s---%s---EMASONTA\n", a, spazio_b);
	return 0;
}
