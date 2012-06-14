#include <stdio.h>
#define MAX_ELEMENTS 10

int main(){
int n,arr[MAX_ELEMENTS],f,i,j,aux;
for(i=0;i<MAX_ELEMENTS-1;i++){
	printf("\nInserire l'elemento %d dell'array\n",i);
	scanf("%d",&arr[i]);
}
printf("Inserire l'elemento finale del vettore\n");
scanf("%d",&f);
for(i=0;i<MAX_ELEMENTS-1;i++){
	printf("%d ",arr[i]);
}
printf("\n");


for(i=0;i<MAX_ELEMENTS-1&&f>arr[i];i++) ;
i--;
for(j=MAX_ELEMENTS-1;j>i+1;j--){
arr[j]=arr[j-1];
}
arr[j]=f;


for(i=0;i<MAX_ELEMENTS;i++){
	printf("%d ",arr[i]);
}
printf("\n");


}
