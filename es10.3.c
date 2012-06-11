#include <stdio.h>
#define MAXVALUES 10

int main(){
	int i,binarr[MAXVALUES],oppositearr[MAXVALUES],flag=0,num=0;
	for(i=0;i<MAXVALUES;i++){
		binarr[i]=flag;
		flag=!flag;
		oppositearr[i]=(flag)?num:-num;	
		num+=3;
	}
	for(i=0;i<MAXVALUES;i++){
		printf("%d ",binarr[i]);
	}
	printf("\n");
	for(i=0;i<MAXVALUES;i++){
		printf("%d ",oppositearr[i]);
	}
	printf("\n");
	








}
