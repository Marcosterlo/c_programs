#include <stdio.h>
#include <math.h>

int main() {
    struct point {
        int x;
        int y;
    };
    struct point p1, p2, *p, *q;
    int *s;
    //ho messo le parentesi per &(p1.x) perche non mi ricordo le priorità degli operatori
    //comunque il . ha priorità massima in generale
    /*printf("Inserire l'ascissa del primo punto: ");
    scanf("%d", &(p1.x));
    printf("Inserire l'ordinata del primo punto: ");
    scanf("%d", &(p1.y));
    printf("Inserire l'ascissa del secondo punto: ");
    scanf("%d", &(p2.x));
    printf("Inserire l'ordinata del secondo punto: ");
    scanf("%d", &(p2.y));
    printf("la distanza tra i 2 punti è: %.2lf\n", (double) pow(pow(p1.x-p2.x, 2)+pow(p1.y-p2.y, 2) , 0.5));*/
    //test sui puntatori a struttura
    p=&p1;
    (*p).x=1;
    (*p).y=1; //in questo caso le parentesi sono necessarie, il . ha priorità maggiore rispetto al *
    q=&p2; //i puntatori p e q puntano all'intera struttura
    (*q).x=2;
    (*q).y=2;
    s=&((*p).x); //il puntatore s punta al campo x di ciò che è puntato da p (p1)
    printf("%d %d\n", (*p).x, (*p).y);
    *s=2;
    printf("%d %d\n", (*p).x, (*p).y);
    //altra sintassi è l'operatore freccia:
    p->y=234; //analogo di (*p).y=234
    printf("%d %d\n", (*p).x, (*p).y);
    //posso riscrivere il precedente blocco della distanza dei punti così:
    printf("Inserire l'ascissa del primo punto: ");
    scanf("%d", &(p->x));
    printf("Inserire l'ordinata del primo punto: ");
    scanf("%d", &(p->y));
    printf("Inserire l'ascissa del secondo punto: ");
    scanf("%d", &(q->x));
    printf("Inserire l'ordinata del secondo punto: ");
    scanf("%d", &(q->y));
    printf("la distanza tra i 2 punti è: %.2lf\n", (double) pow(pow(p->x-q->x, 2)+pow(p->y-q->y, 2) , 0.5));
    return 0;
}