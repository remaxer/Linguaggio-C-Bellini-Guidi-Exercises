#include <stdio.h>


int main(){
int n,m,k,j,i,times;
char internal,frame,pause;
printf("Inserire il numero di linee");
scanf("%d",&n);
printf("Inserire il numero di colonne");
scanf("%d",&m);
printf("Inserire il carattere rispettivamente per l'interno e la cornice");
scanf("%c",&pause);
scanf("%c",&internal);
scanf("%c",&frame);
printf("Quante volte vuoi ripetere la stampa?");
scanf("%d",&times);
for(k=0;k<times;k++){
	for(i=1;i<=n;i++){
		//Riga
		printf("%c",frame);
		for(j=1;j<=(m-2);j++){
			//Colonna
			if(i==1||i==n)printf("%c",frame);
			else printf("%c",internal);
		
		}
		printf("%c\n",frame);

		}
	printf("\n");
}

}
