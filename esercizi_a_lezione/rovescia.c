#include <stdio.h>
#include <string.h>

void rovescia(char *s);

#define MAXS 80

int main() {
    char s[MAXS];
    printf("Inserire la parola da invertire: ");
    gets(s);
    rovescia(s);
    printf("La parola inverita è %s\n", s);
    return 0;
}

void rovescia(char *s) {
    char *p, *q, tmp;
    for (p=s, q=s+strlen(s)-1; p<q; p++, q--) {
        tmp=*p;
        *p=*q;
        *q=tmp;
    }
}