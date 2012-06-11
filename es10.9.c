#include <stdio.h>
#define MAXELEMENTS 10

int main(){
	int mat[MAXELEMENTS][MAXELEMENTS],j,i;
	for(i=0;i<MAXELEMENTS;i++){
		for(j=0;j<MAXELEMENTS;j++){
			mat[i][j]=i+j;
		}
	}
	//Stampa a video
	for(i=0;i<MAXELEMENTS;i++){
		printf("\n");
		for(j=0;j<MAXELEMENTS;j++){
			printf("%d ",mat[i][j]);
		}
	}





}
