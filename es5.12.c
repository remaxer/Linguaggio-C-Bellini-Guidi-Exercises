#include <stdio.h>
//cap 5 12
main(){
int a,b,c;

printf("a: ");
scanf("%d", &a);
printf("b: ");
scanf("%d",&b);
c= a+b*b;
printf("c: %d\n",c);
c=a-b*a;
printf("c: %d\n",c);
c=a+b-a;
printf("c: %d\n",c);
c=a/b;
printf("c: %d\n",c);

}
