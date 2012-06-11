#include <stdio.h>
#define MAXELEMENTS 4

int main(){
	int somma,max,mat[MAXELEMENTS][MAXELEMENTS],i,j;
	for(i=0;i<MAXELEMENTS;i++){
		for(j=0;j<MAXELEMENTS;j++){
			printf("Inserire l'elemento di riga %d e colonna %d ",i,j);
			scanf("%d",&mat[i][j]);
 		}
	}
	for(i=0;i<MAXELEMENTS;i++){
		printf("\n");
		for(j=0;j<MAXELEMENTS;j++){
			printf("%d ",mat[i][j]);
		}
	}
	max=0;
	for(i=0;i<MAXELEMENTS;i++){
		somma=0;
		for(j=0;j<MAXELEMENTS;j++){
			somma+=mat[j][i];
		}
		if(somma>max)max=i;
	}
	printf("\n\nLa colonna con somma massima e' la  %d\n",(max+1)); 	
	
}
