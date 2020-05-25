#include <stdio.h>
#include "libreria.h"

int main() {
    int n;
    n=stampa();
    fflush(stdin);
    printf("L'età media è %.2f\n", eta_media(n));
    soglia_1200();
    return 0;
}