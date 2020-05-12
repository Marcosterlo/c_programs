#include <stdio.h>
#include "funzioni.h"

int main() {
    int n, exit=1, *x;
    Nodo head=NULL, *p=&head;
    do {
        printf("*****\n1) Push\n2) Pop\n3) EnQueue\n4) DeQueue\n5) Display\n6) Esci\n*****\n");
        scanf("%d", &n);
        switch (n) {
            case 1:
                Push(p);
                Display(p);
                break;
            case 2:
                Pop(p, x);
                Display(p);
                break;
            case 3:
                EnQueue(p);
                Display(p);
                break;
            case 4:
                DeQueue(p, x);
                Display(p);
                break;
            case 5:
                Display(p);
                break;
            case 6:
                exit=0;
                break;
            default:
                break;
        }
    } while (exit);
    return 0;
}