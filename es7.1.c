#include <stdio.h>
int y,z;
int mag;
main(){
printf("Primo intero");
scanf("%d",&mag);
printf("Secondo intero");
scanf("%d",&y);
if(y>mag)
mag=y;
printf("Terzo intero");
scanf("%d",&z);
if(z>mag)
mag=z;
printf("Il valore maggiore è %d",mag);


}
