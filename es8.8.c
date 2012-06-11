#include <stdio.h>

int main(){
int d1,m1,y1,d2,m2,y2;
printf("Inserire il giorno");
scanf("%d",&d1);
printf("Inserire il mese");
scanf("%d",&m1);
printf("Inserire l'anno");
scanf("%d",&y1);
printf("Inserire il giorno");
scanf("%d",&d2);
printf("Inserire il mese");
scanf("%d",&m2);
printf("Inserire l'anno");
scanf("%d",&y2);
int mag=(y1==y2)?((m1==m2)?((d1==d2)?0:(d1>d2?1:2)):(m1>m2?1:2)):(y1>y2?1:2);
switch(mag){
case 0:
printf("Date uguali");
break;
case 1:
printf("%d:%d:%d",d1,m1,y1);
break;
case 2:
printf("%d:%d:%d",d2,m2,y2);
break;


}


}
