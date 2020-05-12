#include <stdio.h>
#include "funzioni2.h"

int main() {
    Nodo head=NULL, *p=&head;
    int count, *i=&count, ordinato, crescente=0;
    listAddToHead(p, i, &ordinato);
    listAddToHead(p, i, &ordinato);
    listAddToHead(p, i, &ordinato);
    listAddToHead(p, i, &ordinato);
    printf("%d %d %d\n", ordinato, crescente, count);
    listAddOrdered(p, &ordinato, &crescente, i);
    for (; head!=NULL; head=head->next) {
        printf("%d-> ", head->val);
    }
    return 0;
}