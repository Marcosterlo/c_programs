#include <stdio.h>
#include "funzioni.h"

int main() {
    Nodo head;
    int n, exit;
    do {
        printf("\nInserire il valore da aggiungere alla testa: ");
        scanf("%d", &n);
        head=AddToHead(n);
        printf("Aggiungere un altro valore? (1 per si e 0 per no) ");
        scanf("%d", &exit);
    } while (exit==1);
    AddToTail(123);
    do {
        printf("%d\n", head->val);
        head=head->next;
    } while (head != NULL);
    return 0;
}
