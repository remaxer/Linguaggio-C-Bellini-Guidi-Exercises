#include <stdio.h>

char s[]="ciao come stai io sto bene ma tu?";
int numberOfOccurrences(char);

int main(){
	char c;
	int i;
	printf("Carattere da cercare nella stringa '%s' \n",s);
	scanf("%c",&c);
	i=numberOfOccurrences(c);
	printf("\nIl carattere %c e' presente %d volte\n",c,i); 

}

int numberOfOccurrences(char c){
	int i;
	int j=0;	
	for(i=0;s[i]!='\0';i++){
		if(s[i]==c)j++;	
	}
	return(j);
}
