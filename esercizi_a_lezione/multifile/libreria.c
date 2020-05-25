#include <string.h>
#include <stdio.h>

int stampa() {
    FILE *fd;
    int i, s=0;
    char c[30];
    fd=fopen("file.txt", "r");
    if (fd!=NULL) {
        printf("Inserire quanti contatti leggere: ");
        scanf("%d", &i);
        while (!feof(fd) && s<i) {
            strcpy(c, "");
            fgets(c, 30, fd);
            printf("%s", c);
            s++;
        }
        fflush(fd);
        fclose(fd);
        return i;
    }
    else {
        printf("Errore nell'apertura del file\n");
        return 0;
    }

};

float eta_media(int i) {
    FILE *fd;
    int tot=0, s;
    fd=fopen("file.txt", "r");
    if (fd!=NULL) {
        while (!feof(fd) && s<i) {
            fscanf(fd, "%*s %d %*d", &s);
            tot += s;
            s++;
        }
        fflush(fd);
        fclose(fd);
        return (double) tot/i;
    }
    else {
        printf("Errore nell'apertura del file\n");
        return 0;
    }
};

int soglia_1200() {
    FILE *fd;
    int s;
    char c[30], b[30];
    printf("Inserire il nome del contatto: ");
    gets(c);
    fd=fopen("file.txt", "r");
    if (fd!=NULL) {
        while (!feof(fd)) {
            strcpy(b, "");
            fscanf(fd, "%s %*d %d", b, &s);
            if (!strcmp(c, b)) {
                if (s>1200)
                    printf("Lo stipendio di %s è maggiore di 1200\n", c);
            }
        }
        fflush(fd);
        fclose(fd);
    }
    else {
        printf("Errore nell'apertura del file\n");
        return 0;
    }
};