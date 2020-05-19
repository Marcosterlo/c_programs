#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 

struct numero{
    int x;
    struct numero *next;
};

 

struct numero* inserimento();
void scrittura_su_file(struct numero *);
float leggi_per_media();
int main() {
    struct numero * head;
    head = inserimento();
    scrittura_su_file(head);
    return 0;
}

 

struct numero * inserimento(){
    struct numero * head=NULL;
    struct numero* temp;
    int y, esci=1;
    do {
        temp = (struct numero*) malloc(sizeof(struct numero));
        printf("Inserisci intero: ");
        scanf("%d", &y);
        temp->x = y;
        if (head==NULL) {
            head=temp;
            temp->next=NULL;
        }
        else {
            temp->next=head;
            head=temp;
        }
        printf("Inserire un altro utente? (1=si, 0=no) ");
        scanf("%d", &esci);
    } while (esci);
   return head;
}

 

void scrittura_su_file(struct numero *punt) {
      FILE *fp;
      fp = fopen("ciccio.txt", "w");
      while (punt != NULL) {
    
      fscanf(fp, "%d\n", punt->x);
      punt = punt-> next;
      }
      fflush(fp);
      fclose(fp);
}

 

float leggi_per_media() {
    FILE *fp;
    int y, somma=0, count=0;
    float media;
    fp = fopen("ciccio.txt", "r");
    while(feof(fp)!=0) {
       fscanf(fp, "%d", &y);
       if (y>18) {   
           somma += y;
           count++;
       }
   } 
   fclose(fp);
   media = (float) somma/count;
   printf("%d", media);
   return media;
}