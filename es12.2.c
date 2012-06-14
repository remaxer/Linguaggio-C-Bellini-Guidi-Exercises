#include <stdio.h>
#define MAX_DIM 5

int main(){
char mat[MAX_DIM][MAX_DIM],s;
int i,j,t=0;
for(i=0;i<MAX_DIM;i++){
	for(j=0;j<MAX_DIM;j++){
		printf("Inserire l'elemento riga %d colonna %d \n",i,j);
		scanf("%1s",&mat[i][j]);
	}	

}
printf("Inserire il valore che si vuole cercare \n");
scanf("%1s",&s);
for(i=0;i<MAX_DIM&&!t;i++){
	for(j=0;j<MAX_DIM&&!t;j++){
		if(mat[i][j]==s){
			t=1;	
		}
	}
}
if(t){
printf("L'elemento %c è stato trovato nella riga %d colonna %d",s,(i-1),(j-1));

}
else{
printf("L'elemento %c non e' stato trovato ",s);

}





}
