#include <stdio.h>
#include <string.h>

int main() {
    int *p, vett[]={34, 23, 43};
    char a[50]= "ciao";
    char *const g=a;
    p=vett;
    *g='m';
    printf("%s\n", g);
    printf("%d\n", *p+2);
    printf("%d\n", *p);
    *(p+2)=234;
    p[0]=1;
    for (; p<vett+3; p++) {
        printf("%ld ", *p);
    }
    printf("\n");
    return 0;
}