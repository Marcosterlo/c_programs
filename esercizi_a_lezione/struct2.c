#include <stdio.h>
#include <math.h>

typedef struct {
    int nlati;
    double lato;
} poli;

poli creapoli();
double areapoli(poli);
double peripoli(poli);
void doppiopoli(poli*);

int main() {
    poli p;
    p=creapoli();
    printf("Il perimetro del poligono creato è %.2lf\n", peripoli(p));
    printf("L'area del poligono creato è %.2lf\n", areapoli(p));
    doppiopoli(&p);
    printf("Il perimetro del poligono modificato è %.2lf\n", peripoli(p));
    printf("L'area del poligono modificato è %.2lf\n", areapoli(p));
    return 0;
}

poli creapoli(){
    poli p;
    printf("Inserire il nuemro di lati: ");
    scanf("%d", &(p.nlati));
    printf("Inserire la lunghezza dei lati: ");
    scanf("%lf", &(p.lato));
    return p;
}

double areapoli(poli p) {
    return (p.nlati*pow(p.lato, 2))/(4*tan(3.14/p.nlati));
}

double peripoli(poli p) {
    return p.lato*p.nlati;
}

void doppiopoli(poli *p) {
    (*p).lato*=2;
}
