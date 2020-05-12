#include <stdio.h>
#include <string.h>

int main() {
    FILE *fd, *fw;
    char filer[30], filew[30], c[30];
    int x, y;
    printf("Inserire il nome del file da leggere: ");
    gets(filer);
    printf("Inserire il nome del file da scrivere: ");
    gets(filew);
    fd=fopen(filer, "r");
    fw=fopen(filew, "w");
    if (fd!=NULL) {
        while (!feof(fd)) {
            fgets(c, 30, fd);
            sscanf(c, "%d %d", &x, &y);
            fprintf(fw, "%d\n", x-y);
        }
    }
    else 
        printf("Errore nell'apertura del file\n");
    return 0;
}