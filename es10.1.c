#include <stdio.h>
#define N 5

int main(){
	int arr1[N],arr2[N],arr3[N],i;
	for(i=0;i<N;i++){
		printf("Scrivere l'elemento %d del primo vettore",i);
		scanf("%d",&arr1[i]);
		printf("Scrivere l'elemento %d del secondo vettore",i);
		scanf("%d",&arr2[i]);
	}
	for(i=0;i<N;i++){
		arr3[i]=arr1[i]+arr2[N-i-1];
	}
	for(i=0;i<N;i++){
	printf("%d\t",arr1[i]);
	}
	printf("\n");
	for(i=0;i<N;i++){
	printf("%d\t",arr2[i]);
	}
	printf("\n");
	for(i=0;i<N;i++){
	printf("%d\t",arr3[i]);
	}
	printf("\n");


}
