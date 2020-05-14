#include <stdio.h>
#include "funzioni2.h"

int main() {
    Nodo head=NULL, *p=&head, cerca;
    int count, *i=&count, ordinato, crescente=0;
    listAddToHead(p, i, &ordinato);
    listAddToHead(p, i, &ordinato);
    listAddToHead(p, i, &ordinato);
    listAddToHead(p, i, &ordinato);
    printf("%d %d %d\n", ordinato, crescente, count);
    listAddOrdered(p, &ordinato, &crescente, i);
    cerca=listFind(p, ordinato, crescente);
    if (cerca!=NULL)
        printf("!!%d!!\n", cerca->val);
    for (; head!=NULL; head=head->next) {
        printf("%d-> ", head->val);
    }
    return 0;
}