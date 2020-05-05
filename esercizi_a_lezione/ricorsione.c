#include <stdio.h>
#include <string.h>

void stampa_inv(char *, int i);

int main() {
    char s[80];
    printf("Inserire una parola da invertire: ");
    gets(s);
    stampa_inv(s, strlen(s)-1);
    printf("\n");
    return 0;
}

void stampa_inv(char *s, int i) {
    //definizione caso di base
    printf("%c", s[i]);
    if (i>0) {
        stampa_inv(s, i-1);
    }
}