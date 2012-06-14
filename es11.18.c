#include <stdio.h>

void triangularNumbers(int);

int main(){
int n;
printf("Inserire il numero N ");
scanf("%d",&n);
printf("I numeri triangolari minori di N sono :\n");
triangularNumbers(n);
}

void triangularNumbers(int n){
int i,j;
for(i=1,j=1;j<n;i++,j=(i*(i+1))/2){
	printf("%d\n",j);
}

}
