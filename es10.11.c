#include <stdio.h>
#define MAXVALUES 6

int main(){
	int mat[MAXVALUES][MAXVALUES],mat2[MAXVALUES][MAXVALUES],j,i;
	for(i=0;i<MAXVALUES;i++){
		for(j=0;j<MAXVALUES;j++){
			mat[i][j]=i;
		}
	}
	printf("Prima matrice \n");
	for(i=0;i<MAXVALUES;i++){
		printf("\n");
		for(j=0;j<MAXVALUES;j++){
			printf("%d ",mat[i][j]);
		}
	}
	for(i=0;i<MAXVALUES;i++){
		for(j=0;j<MAXVALUES;j++){
       			mat2[i][j]=mat[j][i];	
		}		
	}
	printf("\n\nSeconda matrice \n");
	for(i=0;i<MAXVALUES;i++){
		printf("\n");
		for(j=0;j<MAXVALUES;j++){
			printf("%d ",mat2[i][j]);
		}
	}
	printf("\n");
	






}
