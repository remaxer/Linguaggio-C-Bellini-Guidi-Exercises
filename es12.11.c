#include <stdio.h>
#define MAX_ELEMENTS 10

int arr[MAX_ELEMENTS];
int elements,i,j;
int pushIntoArray(int);
void showArray(void);

int main(){
int f;
for(i=0;i<MAX_ELEMENTS;i++){
	printf("\nInserire l'elemento %d dell'array\n",f);
	scanf("%d",&f);
	pushIntoArray(f);
	elements++;
	showArray();
}


}


int pushIntoArray(int f){
for(i=0;i<elements&&f>arr[i];i++) ;
i--;
for(j=elements;j>i+1;j--){
arr[j]=arr[j-1];
}
arr[j]=f;
}

void showArray(void){
printf("\n");
for(i=0;i<elements;i++){
printf("%d ",arr[i]);
}
printf("\n");


}
