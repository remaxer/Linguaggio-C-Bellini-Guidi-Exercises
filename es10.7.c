#include <stdio.h>
#define MAXLETTERS 10
char vett[MAXLETTERS]="hey wsup? ";
int main(){
	int i,vocals=0,consonants=0;
	for(i=0;i<MAXLETTERS;i++){
		if(vett[i]>'a'&&vett[i]<'z'){
			if(vett[i]=='a'||vett[i]=='e'||vett[i]=='i'||vett[i]=='o'||vett[i]=='u'){
				vocals++;	
			}
			else{
				consonants++;			
			}		
		}
	}
	printf("Le vocali presenti sono %d\n",vocals);
	printf("Le consonanti presenti sono %d\n",consonants);



}
