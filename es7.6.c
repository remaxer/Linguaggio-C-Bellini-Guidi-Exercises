#include <stdio.h>
int x,y,z;

main(){
printf("Primo intero");
scanf("%d",&x);
printf("Secondo intero");
scanf("%d",&y);
printf("Terzo intero");
scanf("%d",&z);
if(x==y && y==z)
printf("Tutti e tre i numeri uguali");
else if (x==y || y==z || x==z)
printf("Due numeri uguali");
else printf("Numeri diversi");
}
