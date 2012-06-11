#include <stdio.h>
#define LENGTH 5
char v1[LENGTH]="BNSIO",v2[LENGTH]="EISM!",w[LENGTH*2];
int main(){
	int i,j,k;
	//Esempio di inizializzazione
	for(i=0,j=1,k=0;k<LENGTH,j<LENGTH*2,i<LENGTH*2;k++,i+=2,j+=2){
		w[i]=v1[k];
		w[j]=v2[k];	
	}
	for(i=0;i<LENGTH*2;i++){
		printf("%c ",w[i]);
	}
	printf("\n");




}
