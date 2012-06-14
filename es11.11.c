#include <stdio.h>
#include <math.h>

int calculateEsp(int);


int main(){
int x;
printf("Inserire un valore per la x \n");
scanf("%d",&x);
printf("Il valore dell'espressione per x=%d e' %d\n",x,calculateEsp(x));

}


int calculateEsp(int x){
	return(3*(pow(x,3))-(sqrt((pow(x,2)+3)/2)));
}
