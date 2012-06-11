#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define ESTRAZIONI 10
#define RUOTE 11
#define NUMERI 5

int lotto[ESTRAZIONI][RUOTE][NUMERI];
int main(){
	int i,j,k,num;
	for(i=0;i<ESTRAZIONI;i++){
		for(j=0;j<RUOTE;j++){
			for(k=0;k<NUMERI;k++){
				lotto[i][j][k] = i+j+k;
			   }
		}
	}	
	for(i=0;i<ESTRAZIONI;i++){
		printf("\nEstrazione %d \n",(i+1));
		for(j=0;j<RUOTE;j++){
			printf("\nRuota %d \n",(j+1));
			for(k=0;k<NUMERI;k++){
				printf("%d ",lotto[i][j][k]);
			   }
		}
	}
	printf("\nInserire il numero che si vuole controllare\n");
	scanf("%d",&num);
	for(i=0;i<ESTRAZIONI;i++){
		for(j=0;j<RUOTE;j++){
			for(k=0;k<NUMERI;k++){
				if(lotto[i][j][k]==num){
					printf("Il numero %d e' presente nell'estrazione %d e ruota %d\n",num,(i+1),(j+1));
				}
			   }
		}
	}	
	



}
