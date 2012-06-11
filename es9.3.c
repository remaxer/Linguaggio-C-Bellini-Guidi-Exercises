#include <stdio.h>


int main(){
int n,m;
printf("Inserire il numero di linee");
scanf("%d",&n);
printf("Inserire il numero di colonne");
scanf("%d",&m);
for(int i=1;i<=n;i++){
	//Riga
	printf("*");
	for(int j=1;j<=(m-2);j++){
		//Colonna
		if(i==1||i==n)printf("*");
		else printf("Q");
		
	}
	printf("*\n");

}




}
