#include <stdio.h>


int main(){
int i,j,primo;
for(i=100;i>=1;i--){
	primo=1;
	for(j=2;j<i;j++){
		if(i%j==0)primo=0;
	}
	if(primo)printf("%d e' un numero primo \n",i);
	

}




}
