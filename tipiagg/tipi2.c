#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

typedef struct {
    int nlati;
    double lato;
} poligono;

poligono creapoli();
//double areapoli(poligono p);
//double perimpoli(poligono p);
void doppiopoli(poligono *p);

int main() {
    poligono p;
    p=creapoli();
    //printf("L'area del poligono inserito è %.2lf\n", areapoli(p));
    //printf("Il perimetro del poligono inserito è %.2lf\n", perimpoli(p));
    printf("nlati: %d, llato: %.2lf\n", p.nlati, p.lato);
    doppiopoli(&p);
    //printf("L'area del poligono con lato doppio è %.2lf\n", areapoli(p));
    //printf("Il perimetro del poligono con lato doppio è %.2lf\n", perimpoli(p));
    printf("nlati: %d, llato: %.2lf\n", p.nlati, p.lato);
    return 0;
}

poligono creapoli() {
    poligono p;
    printf("Inserire il numero di lati del poligono: ");
    scanf("%d", &p.nlati);
    printf("Inserire la lunghezza dei lati del poligono: ");
    scanf("%lf", &p.lato);
    return p;
}

/*double areapoli(poligono p) {
    return (pow(p.lato, 2)*p.nlati)/4*tan(M_PI/p.nlati);
}

double perimpoli(poligono p) {
    return p.nlati*p.lato;
}*/

void doppiopoli(poligono *p) {
    p->lato*=2;
}