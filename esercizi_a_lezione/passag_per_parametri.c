#include <stdio.h>

void fun(int, int *);

int main() {
    int a, b, *q;
    a=1;
    b=15;
    printf("Prima: a=%d, b=%d\n", a, b);
    fun(a, &b);
    printf("Dopo: a=%d, b=%d\n\n", a, b);
    a=1;
    b=15;
    q=&b;
    //Quando voglio stampare l'indirizzo di un puntatore si usa %p
    printf("Prima: a=%d, b=%d, q=%p\n", a, b, q);
    fun(a, q);
    printf("Dopo: a=%d, b=%d, l'indirizzo dove è allocato q=%p\n", a, b, &q);
    printf("\n%d\n", sizeof(q));
    return 0;
}

void fun(int a, int *p) {
    a=23;
    *p=45;
}